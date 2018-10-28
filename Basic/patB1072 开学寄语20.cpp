 ///
 /// @file    :patB1072 开学寄语20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-28 16:23:57
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
	int n, m, cnt1 = 0, cnt2 = 0;
	cin >> n >> m;
	set<string> id;
	string tmp;
	for(int i = 0; i < m; i++){
		cin >> tmp;
		id.insert(tmp);
	}
	for(int i = 0; i < n; i++){
		string name;
		int k;
		cin >> name >> k;
		vector<string> sid(k);
		vector<string> res;
		for(int j = 0; j < k; j++){
			cin >> sid[j];
			if(id.find(sid[j]) != id.end())
				res.push_back(sid[j]);
		}
		int t = res.size();
		if(t != 0){
			cnt1++;
			cnt2 += t;
			cout << name << ":";
			for(int j = 0; j < t; j++){
				cout << " " << res[j];
			}
			cout << endl;
		}
	}
	cout << cnt1 << " " << cnt2 << endl;
	return 0;
}
