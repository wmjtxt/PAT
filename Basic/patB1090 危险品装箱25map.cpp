 ///
 /// @file    :patB1090 危险品装箱25.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-07 09:11:00
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main(){
	int n, m, k, flag;
	int a, b;
	cin >> n >> m;
	map<int,vector<int>> mp;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		mp[a].push_back(b);
		mp[b].push_back(a);
	}
	while(m--){
		vector<int> vis(100000,0);
		cin >> k;
		vector<int> g(k);
		flag = 0;
		string tmp;
		for(int i = 0; i < k; i++){
			cin >> g[i];
			vis[g[i]] = 1;
		}
		for(int i = 0; i < k; i++){
			for(int j = 0; j < mp[g[i]].size(); j++){
				if(vis[mp[g[i]][j]]) flag = 1;
			}
		}
		if(flag == 0) printf("Yes\n");
		else 
			printf("No\n");
	}
	return 0;
}
