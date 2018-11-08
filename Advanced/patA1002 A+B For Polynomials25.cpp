 ///
 /// @file    :patA1002 A+B For Polynomials25.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-08 18:08:05
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int k1, k2, n, cnt = 0;
	double an;
	vector<double> a(1001,0.0), b(1001,0.0), res(1001,0.0);
	cin >> k1;
	for(int i = 0; i < k1; i++){
		cin >> n >> an;
		a[n] = an;
	}
	cin >> k2;
	for(int i = 0; i < k2; i++){
		cin >> n >> an;
		b[n] = an;
	}
	for(int i = 0; i < 1001; i++){
		if(a[i] != 0.0 || b[i] != 0.0){
			res[i] = a[i] + b[i];
			if(res[i] != 0.0) cnt++;
		}
	}
	cout << cnt;
	for(int i = 1000; i >= 0; i--){
		if(res[i] != 0.0)
			printf(" %d %.1f",i, res[i]);
	}
	return 0;
}
