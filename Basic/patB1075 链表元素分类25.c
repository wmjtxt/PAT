 ///
 /// @file    :patB1075.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-31 03:30:32(NewYork time)
 /// @quote   :
 ///
 
#include <stdio.h>

//不明白第四个测试点为啥错误！！！！！！！！！！！
int main()
{
	int node[100000][2];
	int list1[100000];
	int n, k, first;
	int negCnt = 0, kCnt = 0;
	scanf("%d%d%d",&first, &n, &k);
	for(int i = 0; i < n; i++){
		int addr, data, next;
		scanf("%d%d%d", &addr, &data, &next);
		node[addr][0] = data, node[addr][1] = next;
		if(data < 0) negCnt++;
		if(data >= 0 && data <= k) kCnt++;
	}
	int cur = first;
	int negidx = 0, kidx = negCnt, othidx = negCnt+kCnt;
	while(cur != -1){
		int tmp = node[cur][0];
		if(tmp < 0){
			list1[negidx++] = cur;
		}
		else if(tmp >= 0 && tmp <= k){
			list1[kidx++] = cur;
		}
		else{
			list1[othidx++] = cur;
		}
		cur = node[cur][1];
	}
	for(int i = 0; i < n; i++){
		if(i == 0)
			printf("%05d %d ", list1[i], node[list1[i]][0]);
		else 
			printf("%05d\n%05d %d ", list1[i], list1[i], node[list1[i]][0]);
	}
	printf("-1\n");
	return 0;
}
