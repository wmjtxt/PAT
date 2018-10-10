 ///
 /// @file    :patB1038 统计同成绩学生(20分).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-10 19:10:51(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <stdio.h>
#include <vector>
using std::vector;

int main(){
	int N, K;
	scanf("%d", &N);
	vector<int> grade(N);
	int i = 0;
	while(i < N){
		scanf("%d", &grade[i]);
		i++;
	}
	scanf("%d", &K);
	vector<int> goal(K);
	i = 0;
	while(i < K){
		scanf("%d", &goal[i]);
		i++;
	}
	vector<int> res(K,0);
	for(i = 0; i < K; i++){
		for(int j = 0; j < N; j++){
			if(!(goal[i] ^ grade[j])){
				++res[i];
			}
		}
	}
	for(i = 0; i < K-1; i++){
		printf("%d ", res[i]);
	}
	printf("%d\n", res[i]);
	return 0;
}
