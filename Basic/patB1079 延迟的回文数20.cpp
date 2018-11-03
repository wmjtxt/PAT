 ///
 /// @file    :patB1079 延迟的回文数20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-03 20:51:55(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

bool ispn(string num){
	for(int i = 0; i < num.size()/2; i++)
		if(num[i] != num[num.size()-i-1])
			return false;
	return true;
}

string reverse(string num){
	string res = "";
	for(int i = num.size()-1; i >= 0; i--)
		res += num[i]; 
	return res;
}

string adds(string a, string b){
	string res = "";
	int i = a.size()-1, j = b.size()-1;
	int c = 0;
	for(; i >= 0 && j >= 0; i--, j--){
		int sum = a[i] - '0' + b[j] - '0' + c;
		c = sum/10;
		res += to_string(sum%10);
	}
	while(j > 0){
		res += b[j];
		j--;
	}
	while(i > 0){
		res += a[i];
		i--;
	}
	if(c != 0) res += to_string(c);
	return reverse(res);
}

int main(){
	string n;
	int i = 0;
	cin >> n;
	while(i < 10){
		if(ispn(n)){
			cout << n << " is a palindromic number.";
			break;
		}
		else{
			cout << n << " + ";
			if(reverse(n).size() < n.size()) cout << "0";
			cout << reverse(n) << " = " << adds(n,reverse(n)) << endl;
			n = adds(n,reverse(n));
		}
		i++;
	}
	if(i == 10)
		cout << "Not found in 10 iterations.";
	return 0;
}
