 ///
 /// @file    :patB1053 住房空置率20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-18 17:55:26
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int n, d;
	double e;
	cin >> n >> e >> d;
	int a = 0, b = 0;//可能空置，空置的住房数
	for(int i = 0; i < n; i++){
		int k;
		cin >> k;
		int c = 0;//记录电量低于阈值的天数
		for(int j = 0; j < k; j++){
			double tmp;
			cin >> tmp;
			if(tmp < e)
				c++;
		}
		if(c > k/2) a++;
		if(c > k/2 && k > d){
			b++;
			a--;
		}
	}
	printf("%.1f%% %.1f%%", 100.0*a/n, 100.0*b/n);
	return 0;
}
