 ///
 /// @file    :patB1077 互评成绩计算20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-03 19:50:15(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		int sum = 0, score = 0, cnt = 0, tea, stu, mins = INT_MAX, maxs = INT_MIN;
		cin >> tea;
		for(int j = 0; j < n-1; j++){
			cin >> stu;
			if(stu >= 0 && stu <= m){
				mins = min(mins, stu);
				maxs = max(maxs, stu);
				score += stu;
				cnt++;
			}
		}
		score -= mins + maxs; 
		cnt -= 2;
		double res = 1.0*(tea + 1.0*score/cnt)/2;
		int res1 = (int)res;
		if(res - res1 >= 0.5) res1 += 1; 
		printf("%d\n", res1);
	}
	return 0;
}
