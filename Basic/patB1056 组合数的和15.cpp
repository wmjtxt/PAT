 ///
 /// @file    :patB1056 组合数的和15.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-21 12:38:16
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, sum = 0, zero = -1;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i< n; i++){
		cin >> a[i];
		sum += a[i];
		if(a[i] == 0)
			zero = i;
	}
	if(zero == -1)
		sum *= (n-1)*11;
	else
		sum = sum*((n-1)*11-1);
	cout << sum << endl;
	return 0;
}
