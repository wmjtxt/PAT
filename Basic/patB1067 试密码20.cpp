 ///
 /// @file    :patB1067 试密码20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-27 18:56:17
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	string rpw;
	int cnt;
	cin >> rpw >> cnt;
	string pw;
	int i = 0;
	while(1){
		getline(cin,pw);
		if(pw == "#")
			break;
		i++;
		if(pw == rpw){
			cout << "Welcome in" << endl;
			break;
		}
		else{
			cout << "Wrong password: " << pw << endl;
			if(i == cnt){
				cout << "Account locked" << endl;
				break;
			}
		}
	}
	return 0;
}
