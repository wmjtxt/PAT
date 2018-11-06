 ///
 /// @file    :patB1087 有多少不同的值20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-06 19:29:38
 /// @quote   :
 ///
 
#include <iostream>
#include <set>
using namespace std;

int main(){
	int n, tmp;
	cin >> n;
	set<int> a;
	for(int i = 1; i <= n; i++){
		tmp = i/2 + i/3 + i/5;
		a.insert(tmp);
	}
	cout << a.size() << endl;
	return 0;
}
