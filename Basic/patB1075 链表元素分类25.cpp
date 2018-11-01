 ///
 /// @file    :patB1075.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-31 03:30:32(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<vector<int>> node(100000,vector<int>(2));
	vector<int> list1(100000);
	int n, k, first;
	scanf("%d%d%d",&first, &n, &k);
	int negCnt = 0, kCnt = 0;
	for(int i = 0; i < n; i++){
		int addr, data, next;
		scanf("%d", &addr);
		scanf("%d%d", &node[addr][0], &node[addr][1]);
		if(node[addr][0] < 0) negCnt++;
		else if(node[addr][0] >= 0 && node[addr][0] <= k) kCnt++;
	}
	int negidx = 0, kidx = negCnt, othidx = negCnt+kCnt;
	while(first != -1){
		if(node[first][0] < 0){
			list1[negidx++] = first;
		}
		else if(node[first][0] >= 0 && node[first][0] <= k){
			list1[kidx++] = first;
		}
		else{
			list1[othidx++] = first;
		}
		first = node[first][1];
	}
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(flag == 0){
			printf("%05d %d ", list1[i], node[list1[i]][0]);
			flag = 1;
		}
		else 
			printf("%05d\n%05d %d ", list1[i], list1[i], node[list1[i]][0]);
	}
	printf("-1\n");
	return 0;
}
