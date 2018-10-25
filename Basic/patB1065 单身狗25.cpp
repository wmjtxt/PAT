 ///
 /// @file    :patB1065 单身狗25.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-25 11:23:53
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(string a, string b){
	for(int i = 0; i < 5; i++){
		if(a[i] != b[i])
			return a[i] < b[i];
	}
}
int main(){
	int n;
	cin >> n;
	map<string,int> notsin;
	for(int i = 0; i < n; i++){
		string tmp1,tmp2;
		cin >> tmp1 >> tmp2;
		notsin[tmp1] = i+1;
		notsin[tmp2] = i+1;
	}
	int m, k = n;//k is dog id;
	cin >> m;
	map<int, string> gle;
	for(int i = 0; i < m; i++){
		string tmp;
		cin >> tmp;
		if(notsin[tmp] == 0){
			k++;
			gle[k] = tmp;
		}
		else{
			auto it = gle.find(notsin[tmp]);
			if(it == gle.end())
				gle[notsin[tmp]] = tmp;
			else{
				gle.erase(it);
			}
		}
	}
	vector<string> res;
	for(auto it : gle)
		res.push_back(it.second);
	sort(res.begin(), res.end(), cmp);
	cout << res.size() << endl;
	bool flag = false;
	for(auto it : res){
		if(flag) cout << " ";
		else flag = true;
		cout << it;
	}
	return 0;
}
