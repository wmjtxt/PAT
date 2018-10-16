 ///
 /// @file    :patB1046 划拳15.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-16 16:15:15
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int n, a = 0, b = 0;
	int a1, a2, b1, b2;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a1 >> a2 >> b1 >> b2;
		if(a2 == a1+b1 && b2 != a1+b1) b++;
		if(a2 != a1+b1 && b2 == a1+b1) a++;
	}
	cout << a << " " << b << endl;
	return 0;
}
