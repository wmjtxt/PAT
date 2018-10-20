 ///
 /// @file    :patB1055 集体照25.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-20 17:12:08
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<pair<string,int>> v;
	for(int i = 0; i < n; i++){
		string name;
		int height;
		cin >> name >> height;
		v.push_back(make_pair(name,height));
	}
	sort(v.begin(), v.end(), [](pair<string,int> a, pair<string,int> b){
				return (a.second == b.second) ? a.first < b.first : a.second > b.second;});
	//for(auto it : v)
	//	cout << it.first << "-" << it.second << endl;
	vector<vector<string>> res(k);
	int lastr = n-n/k*(k-1);
	int othr = n/k;
	res[0].push_back(v[0].first);
	int j;
	for(j = 1; j < lastr; j++){
		if(j%2)
			res[0].insert(res[0].begin(),v[j].first);
		else
			res[0].push_back(v[j].first);
	} 
	for(int i = 1; i < k; i++){
		int jj = 0;
		res[i].push_back(v[j].first);
		j++;
		jj++;
		while(jj < othr){
			if((j-lastr)%2)
				res[i].insert(res[i].begin(),v[j].first);
			else
				res[i].push_back(v[j].first);
			jj++;
			j++;
		}
		lastr = j;
	}
	for(auto it : res){
		for(int i = 0; i < it.size(); i++){
			if(i!=0) cout << "-";
			cout << it[i];
		}
		cout << endl;
	} return 0;
}
