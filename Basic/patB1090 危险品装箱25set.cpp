 ///
 /// @file    :patB1090 危险品装箱25.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-07 09:11:00
 /// @quote   :
 ///
 
#include <iostream>
#include <utility>
#include <vector>
#include <unordered_set>
using namespace std;


int main(){
	int n, m, k, flag;
	string a, b;
	cin >> n >> m;
	unordered_set<string> s;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		s.insert(a+b);
	}
	for(int i = 0; i < m; i++){
		cin >> k;
		vector<string> g(k);
		flag = 0;
		string tmp;
		for(int j = 0; j < k; j++){
			cin >> g[j];
			for(int x = 0; x < j; x++){
				if(s.find(g[x]+g[j]) != s.end() || s.find(g[j]+g[x]) != s.end()){
					//printf("%s,%s\n",g[x],g[j]);
					//printf("No\n");
					flag = 1;
					//getline(cin,tmp);
					//break;
				}
			}
		}
		if(flag == 0) printf("Yes\n");
		else 
			printf("No\n");
	}
	return 0;
}
