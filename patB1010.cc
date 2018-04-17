 ///
 /// @file    patB1010.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 06:59:16(NewYork time)
 /// @quote   liuchuo(柳婼)
 ///
 
#include <iostream>
using namespace std;

int main(){
	int a, b, flag = 0;
	while(cin >> a >> b){
		if(flag == 0 && b == 0) cout << "0 0";
		if(b != 0){
			if(flag == 1) cout << " ";
			cout << a * b << " " << b - 1;
			flag = 1;
		}
	}
	return 0;
}
