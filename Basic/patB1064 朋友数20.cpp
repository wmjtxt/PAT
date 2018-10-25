 ///
 /// @file    :patB1064 朋友数20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-25 11:02:59
 /// @quote   :
 ///
 
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> res;
	set<int> fid;
	for(int i = 0; i < n; i++){
		int tmp, sum = 0;
		cin >> tmp;
		while(tmp > 0){
			sum += tmp%10;
			tmp/=10;
		}
		fid.insert(sum);
	}
	for(auto it : fid)
		res.push_back(it);
	sort(res.begin(),res.end(),[](int a, int b){return a < b;});
	cout << res.size() << endl;
	bool flag = false;
	for(auto it : res){
		if(flag) cout << " ";
		else flag = true;
		cout << it;
	}
	return 0;
}
