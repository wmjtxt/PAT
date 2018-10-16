 ///
 /// @file    :patB1047 编程团体赛20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-16 16:40:22
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(1001,0);
	int team, member, score, max = 0, maxteam = 0;
	for(int i = 0; i < n; i++){
		scanf("%d-%d %d",&team, &member, &score);
		a[team] += score;
		if(max < a[team]) {
			maxteam = team;
			max = a[team];
		}
	}
	cout << maxteam << " " << max << endl;
	return 0;
}
