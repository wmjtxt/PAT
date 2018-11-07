 ///
 /// @file    :patB1090 危险品装箱25.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-07 09:11:00
 /// @quote   :
 ///
 
#include <iostream>
#include <utility>
#include <vector>
#include <map>
using namespace std;

int main(){
	int n, m, k, flag;
	int a, b;
	scanf("%d %d", &n, &m);
	map<pair<int,int>,int> mp;
	for(int i = 0; i < n; i++){
		scanf("%d %d", &a, &b);
		//printf("%d,%d\n", a, b);
		mp[make_pair(a,b)] = 1;
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &k);
		vector<int> g(k);
		flag = 0;
		string tmp;
		for(int j = 0; j < k; j++){
			scanf("%d", &g[j]);
			for(int x = 0; x < j; x++){
				if(mp[make_pair(g[x],g[j])] || mp[make_pair(g[j],g[x])]){
					//printf("%s,%s\n",g[x],g[j]);
					printf("No\n");
					flag = 1;
					getline(cin,tmp);
					break;
				}
			}
		}
		if(flag == 0) printf("Yes\n");
	}
	return 0;
}
