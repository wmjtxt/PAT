 ///
 /// @file    :patB1059 C语言竞赛20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-22 20:59:37
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <map>
using namespace std;

bool isprime(int n){
	for(int i = 2; i*i <= n; i++){
		if(n%i == 0)
			return false;
	}
	return true;
}

int main(){
	int n,k;
	cin >> n;
	map<string,int> rank;
	vector<bool> flag(n,false);
	for(int i = 0; i < n; i++){
		string tmp;
		cin >> tmp;
		rank[tmp] = i+1;
	}
	cin >> k;
	vector<string> select(k);
	for(int i = 0; i < k; i++){
		cin >> select[i]; 
		auto it = rank.find(select[i]);
		if(it != rank.end()){
			if(flag[it->second]){
				cout << select[i] << ": Checked" << endl;
				continue;
			}
			if(it->second == 1){
				cout << select[i] << ": Mystery Award" << endl;
			}
			else if(isprime(it->second)){
				cout << select[i] << ": Minion" << endl;
			}
			else{
				cout << select[i] << ": Chocolate" << endl;
			}
			flag[it->second] = true;
		}
		else{
			cout << select[i] << ": Are you kidding?" << endl;
		}
	}
	return 0;
}
