 ///
 /// @file    :patB1060 爱丁顿数25.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-23 18:35:36
 /// @quote   :
 ///
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n+1);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a.begin()+1,a.end(),[](int a, int b){return a > b;});
	int k = 1;
	while(a[k] > k){
		k++;
	}
	cout << k-1 << endl;
	return 0;
} 
