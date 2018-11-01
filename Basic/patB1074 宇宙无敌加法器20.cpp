 ///
 /// @file    :patB1074 宇宙无敌加法器20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-30 09:46:58
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	string t, a, b, res = "";
	cin >> t;
	cin >> a >> b;
	int i = a.size()-1, j = b.size()-1, k = t.size()-1;
	int tmp = 0, c = 0;
	for(; i >= 0 && j >= 0; i--, j--){
		if(t[k] -'0' == 0) t[k] = 10 + '0';
		tmp = a[i] - '0' + b[j] - '0' + c;
		c = tmp/(t[k]-'0');
		res.insert(0,1,tmp%(t[k] - '0') + '0');
		k--;
	}
	while(i >= 0){
		if(t[k] -'0' == 0) t[k] = 10 + '0';
		tmp = a[i] - '0' + c;
		c = tmp/(t[k]-'0');
		res.insert(0,1,tmp%(t[k] - '0') + '0');
		i--;
		k--;
	}
	while(j >= 0){
		if(t[k] -'0' == 0) t[k] = 10 + '0';
		tmp = b[j] - '0' + c;
		c = tmp/(t[k]-'0');
		res.insert(0,1,tmp%(t[k] - '0') + '0');
		j--;
		k--;
	}
	if(c != 0)
		res = '1' + res;
	i = 0;
	while(res[i] == '0') i++;
	res = res.substr(i,res.size()-i);
	if(res.size() < 1)
		cout << "0";
	else 
		cout << res;
	return 0;
}
