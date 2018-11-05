 ///
 /// @file    :patB1084 外观数列20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-05 15:59:24
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int d, n;
	cin >> d >> n;
	string tmp, res = "";
	tmp = to_string(d);
	int i = 1;
	while(i < n){
		char c = tmp[0];
		int cnt = 1;
		res = "";
		for(int j = 1; j < tmp.size(); j++){
			if(tmp[j] == c){
				cnt++;
			}
			else{
				res += c + to_string(cnt);
				c = tmp[j];
				cnt = 1;
			}
		}
		res += c + to_string(cnt);
		tmp = res;
		i++;
	}
	cout << res << endl;
	return 0;
}
