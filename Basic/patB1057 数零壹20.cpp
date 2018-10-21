 ///
 /// @file    :patB1057 数零壹20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-21 13:07:14
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int sum = 0, cntz = 0, cnto = 0;
	for(int i = 0; i < str.size(); i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			sum = sum + str[i] - 'a' + 1;
		} if(str[i] >= 'A' && str[i] <= 'Z'){
			sum = sum + str[i] - 'A' + 1;
		}
	}
	while(sum != 0){
		if(sum & 1)
			cnto++;
		else
			cntz++;
		sum >>= 1;
	}
	cout << cntz << " " << cnto << endl;
	return 0;
}
