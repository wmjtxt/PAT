 ///
 /// @file    :patB1038 统计同成绩学生(20分).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-10 19:10:51(NewYork time)
 /// @quote   :liuchuo
 ///
 
#include <iostream>
//#include <stdio.h>
#include <vector>
using std::vector;

int main(){
	int N, K, in;
	vector<int> grade(101);
	scanf("%d", &N);
	int i = 0;
	while(i < N){
		scanf("%d", &in);
		++grade[in];
		i++;
	}
	scanf("%d", &K);
	i = 0;
	while(i < K){
		scanf("%d", &in);
		if(i != 0) printf(" ");
		printf("%d", grade[in]);
		i++;
	}
	return 0;
}
