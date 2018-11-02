 ///
 /// @file    :patB1076 Wifi密码15.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-02 09:13:04
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n <= 0 ) return 0;
	string res = "";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 4; j++){
			string s;
			if(j != 0) scanf(" ");
			cin >> s;
			if(s[2] == 'T') cout << s[0]-'A'+1;
		}
		getchar();
	}
	return 0;
}
