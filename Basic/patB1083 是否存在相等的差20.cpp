 ///
 /// @file    :patB1083 是否存在相等的差20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-05 15:36:55
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(10001,0);
	for(int i = 1; i <= n; i++){
		int t;
		cin >> t;
		a[abs(t-i)]++;
	}
	for(int i = 10000; i > 0; i--){
		if(a[i] >= 2) cout << i << " " << a[i] << endl;
	}
	return 0;
}
