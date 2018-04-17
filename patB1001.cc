 ///
 /// @file    patB1001.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 03:21:15(NewYork time)
 /// @from    
 ///
 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	int n;
	cin >> n;
	int count = 0;
	while(n != 1){
		if(n%2 == 0)
			n /= 2;
		else
			n = (3*n+1)/2;
		count++;
	}
	cout << count << endl;
	return 0;
}
