 ///
 /// @file    patB1003.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 04:12:52(NewYork time)
 /// @from    liuchuo(柳婼)
 ///
 
#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		string s[n];
		int res[n] = {0};
		for(int i = 0; i < n; ++i){
			cin >> s[i];
		}
		for(int i = 0; i < n; ++i){
			int p = 0, t = 0;
			map<char,int> m;
			for(int j = 0; j < s[i].size(); ++j){
				m[s[i][j]]++;
				if(s[i][j] == 'P') p = j;
				if(s[i][j] == 'T') t = j;
			}
			if(m['P'] == 1 && m['A'] != 0 && m['T'] == 1 && m.size() == 3 && p*(t-p-1) == s[i].length()-t-1)
				res[i] = 1;
		}
		for(int i = 0;i < n; ++i){
			if(res[i])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	return 0;
}
