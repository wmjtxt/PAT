 ///
 /// @file    :patB1061 判断题15.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-23 21:55:18
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> total(m);
	vector<int> right(m);
	for(int i = 0; i < m; i++){
		cin >> total[i];
	}
	for(int i = 0; i < m; i++){
		cin >> right[i];
	}
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int i = 0; i < m; i++){
			int tmp;
			cin >> tmp;
			if(tmp == right[i])
				sum += total[i];
		}
		cout << sum << endl;
	}
	return 0;
}
