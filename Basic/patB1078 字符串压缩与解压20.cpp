 ///
 /// @file    :patB1078 字符串压缩与解压20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-03 20:20:05(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	char c;
	string str, res = "";
	cin >> c;
	getchar();
	getline(cin, str);
	if(c == 'C'){
		char a = str[0];
		int cnt = 1;
		for(int i = 1; i < str.size(); i++){
			if(str[i] == a){
				cnt++;
			}
			else{
				if(cnt > 1) res += to_string(cnt);
				res += a;
				a = str[i];
				cnt = 1;
			}
		}
		if(cnt > 1) res += to_string(cnt);
		res += a;
	}
	else if(c == 'D'){
		for(int i = 0; i < str.size(); i++){
			if(str[i] >= '0' && str[i] <= '9'){
				int num = 0;
				while(str[i] >= '0' && str[i] <= '9'){
					num = 10*num + str[i]-'0';
					i++;
				}
				for(int j = 0; j < num; j++){
					res += str[i];
				}
			}
			else
				res += str[i];
		}
	}
	cout << res;
	return 0;
}
