 ///
 /// @file    :patB1080 MOOC期终成绩25.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-04 11:32:48
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct Node{ 
	int p = -1;
	int m = -1; 
	int f = -1; 
	int g = -1;
};

bool cmp(pair<string,Node> a, pair<string,Node> b){
	return a.second.g != b.second.g ? a.second.g > b.second.g : a.first < b.first;
}

int main(){
	int p, m, n;
	unordered_map<string,Node> list;
	cin >> p >> m >> n;
	for(int i = 0; i < p; i++){
		string id;
		int s;
		cin >> id >> s;
		if(s >= 200) list[id].p = s;
	}
	for(int i = 0; i < m; i++){
		string id;
		int s;
		cin >> id >> s;
		if(list.find(id) != list.end()){
			list[id].m = s;
		}
	}
	for(int i = 0; i < n; i++){
		string id;
		int s;
		cin >> id >> s;
		if(list.find(id) != list.end()){
			list[id].g = list[id].f = s;
			if(list[id].m > list[id].f) list[id].g = int(0.4*list[id].m + 0.6*list[id].f + 0.5);
		}
	}
	//vector<pair<string,Node>> res(list.size());
	vector<pair<string,Node>> res;
	int i = 0;
	for(auto it : list)
		//if(it.second.g >= 60) res[i++] = it;
		if(it.second.g >= 60) res.push_back(it);
	//res.resize(i);
	sort(res.begin(), res.end(), cmp);
	for(auto it : res){
		cout << it.first << " " << it.second.p << " " << it.second.m << " " << it.second.f << " " << it.second.g << endl;
	}
	return 0;
}
