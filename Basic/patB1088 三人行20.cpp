 ///
 /// @file    :patB1088 三人行20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-06 19:41:42
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

void print(int m, double n){
	if(m == n) cout << " Ping";
	else if(m > n) cout << " Gai";
	else cout << " Cong";
}

int main(){
	int a, b, c, x, y, m;
	cin >> m >> x >> y;
	int jia = -1, yi;
	double bing;
	for(a = 1; a <= 9; a++){
		for(b = 0; b <= 9; b++){
			if(10*a+b > jia && abs(10*a+b-10*b-a)*y == (10*b+a)*x){
				jia = 10*a+b;
				yi = 10*b+a;
				bing = 1.0*(10*b+a)/y;
			}
		}
	}
	if(jia == -1) cout << "No Solution" << endl;
	else{
		cout << jia;
		print(m,1.0*jia);
		print(m,1.0*yi);
		print(m,bing);
	}
	return 0;
}
