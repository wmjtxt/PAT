 ///
 /// @file    :patB1082 射击比赛20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-05 11:55:35
 /// @quote   :
 ///
 
#include <iostream>
#include <limits.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string chmp, bird;
	int maxd = 0, mind = INT_MAX;
	for(int i = 0; i < n; i++){
		string id;
		int x, y;
		cin >> id >> x >> y;
		int tmp = x*x + y*y;
		if(maxd < tmp){
			maxd = tmp;
			bird = id;
		}
		if(mind > tmp){
			mind = tmp;
			chmp = id;
		}
	}
	cout << chmp << " " << bird << endl;
	return 0;
}
