 ///
 /// @file    :patB1085 PAT单位排行25.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-06 15:45:26
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <algorithm>
using namespace std;

struct Node{
	double total = 0.0;
	int cnt = 0;
};

void lower(string& str){
	for(int i = 0; i < str.size(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
	}
}

bool cmp(pair<string,Node> a, pair<string,Node> b){
	if((int)a.second.total != (int)b.second.total) return (int)a.second.total > (int)b.second.total;
	else if(a.second.cnt != b.second.cnt) return a.second.cnt < b.second.cnt;
	else return a.first < b.first;
}

int main(){
	int n;
	cin >> n;
	unordered_map<string, Node> v;
	string name, tmp;
	double score;
	for(int i = 0; i < n; i++){
		cin >> name >> score >> tmp;
		if(name[0] == 'B') score /= 1.5;
		else if(name[0] == 'T') score *= 1.5;
		lower(tmp);
		v[tmp].total += score;
		v[tmp].cnt++;
	}
	vector<pair<string,Node>> res(v.size());
	int m = 0;
	for(auto it : v){
		res[m++] = it;
	}
	cout << m << endl;
	sort(res.begin(), res.end(), cmp);
	int rank;
	for(int i = 0; i < m; i++){
		if(i > 0 && (int)res[i].second.total == (int)res[i-1].second.total)
			cout << rank;
		else{
			cout << i+1;
			rank = i+1;
		}
		cout << " " << res[i].first << " " << (int)res[i].second.total << " " << res[i].second.cnt << endl;
	}
	return 0;
}
