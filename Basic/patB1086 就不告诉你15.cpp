 ///
 /// @file    :patB1086 就不告诉你15.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-06 19:23:03
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int a, b, sum, res;
	cin >> a >> b;
	sum = a * b;
	while(sum > 0){
		res = res * 10 + sum % 10;
		sum /= 10;
	}
	cout << res << endl;
	return 0;
}
