 ///
 /// @file    patB1006.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 05:30:12(NewYork time)
 /// @from    
 ///
 
#include <iostream>
using namespace std;

int main(){
	int n;
	int a, b, c;
	int i;
	while(cin >> n){
		if((n / 100) % 10){
			a = (n / 100) % 10;
			for(i = 0; i < a; i++)
				cout << 'B';
		}
		if((n / 10) % 10){
			b = (n / 10) % 10;
			for(i = 0; i < b; i++)
				cout << 'S';
		}
		c = n % 10;
		for(i = 0; i < c; i++)
			cout << i + 1;
	}
	return 0;
};
