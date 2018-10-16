 ///
 /// @file    :patB1045 快速排序(25分)-ac.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-16 12:33:52
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N, max = 0, cnt = 0;
	cin >> N;
	vector<int> a(N), b(N), res(N);
	for(int i = 0; i < N; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b.begin(), b.end());
	for(int i = 0; i < N; i++){
		if(a[i] == b[i] && a[i] > max)
			res[cnt++] = a[i];
		if(a[i] > max)
			max = a[i];
	}
	cout << cnt << endl;
	for(int i = 0; i < cnt; i++){
		if(i != 0)
			cout << " ";
		cout << res[i];
	}
	cout <<  endl;
	return 0;
}
