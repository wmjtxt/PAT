 ///
 /// @file    :patB1063 计算谱半径20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-24 21:19:37
 /// @quote   :
 ///
 
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	double max = 0.0;
	for(int i = 0; i < n; i++){
		int a, b;
		double tmp;
		cin >> a >> b;
		tmp = sqrt(a * a + b * b);
		if(max < tmp)
			max = tmp;
	}
	printf("%.2f",max);
	return 0;
}
