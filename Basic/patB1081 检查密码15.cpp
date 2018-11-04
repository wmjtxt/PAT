 ///
 /// @file    :patB1081 检查密码15.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-04 17:38:32
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

bool isl(char c){
	if(c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c == '.')
		return true;
	else
		return false;
}

int main(){
	int n;
	cin >> n;
	getchar();
	for(int i = 0; i < n; i++){
		string tmp;
		getline(cin, tmp);
		//cin >> tmp;
		bool flag = true, num = false, let = false;
		if(tmp.size() < 6)
			cout << "Your password is tai duan le." << endl;
		else{
			for(int j = 0; j < tmp.size(); j++){
				if(!isl(tmp[j])){
					flag = false;
				}
				else{
					if(tmp[j] >= '0' && tmp[j] <= '9')
						num = true; 
					if(tmp[j] >= 'a' && tmp[j] <= 'z' || tmp[j] >= 'A' && tmp[j] <= 'Z')
						let = true;
				}
			}
			if(flag && num && let)
				cout << "Your password is wan mei." << endl;
			if(!flag)
				cout << "Your password is tai luan le." << endl;
			if(let && !num)
				cout << "Your password needs shu zi." << endl;
			if(!let && num)
				cout << "Your password needs zi mu." << endl;
		}
	}
	return 0;
}
