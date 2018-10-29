 ///
 /// @file    :patB1073 多选题常见计分法20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-29 16:10:38
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <set>
using namespace std;

bool contains(set<char> a, set<char> b){
	if(b.empty())
		return false;
	for(auto item : b){
		if(a.find(item)==a.end())
			return false;
	}
	return true;
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> total(m), optionCnt(m), rightCnt(m);
	vector<set<char>> options(m);
	vector<vector<int> > wrongCnt;
	for(int i = 0; i < m; i++){
		cin >> total[i] >> optionCnt[i] >> rightCnt[i];
		vector<int> tmp(optionCnt[i],0);
		for(int j = 0; j < rightCnt[i]; j++){
			char c;
			cin >> c; 
			options[i].insert(c);
			tmp[c-'a'] = n;
		}
		wrongCnt.push_back(tmp);
	}
	//
	int wmaxcnt = 0;
	for(int i = 0; i < n; i++){	
		int k;
		vector<set<char>> ans(m);
		vector<vector<int>> wcnt(m);
		int flag = 0;
		double score = 0.0;
		scanf("\n");
		for(int i = 0; i < m; i++){
			if(flag) scanf(" ");
			else flag++;
			scanf("(%d", &k);
			for(int j = 0; j < k; j++){
				char c;
				scanf(" %c", &c);
				ans[i].insert(c);
				int jj = c-'a';
				if(options[i].find(c) == options[i].end()){
					wrongCnt[i][jj]++;
					if(wmaxcnt < wrongCnt[i][jj])
						wmaxcnt = wrongCnt[i][jj];
				}
				else{
					wrongCnt[i][jj]--;
				}
			}
			scanf(")");
			if(ans[i] == options[i]){
				score += 1.0*total[i];
			}
			else if(contains(options[i],ans[i])){
				score += 1.0*total[i]/2;
			}
		}
		printf("%.1f\n",score);
	}
	for(int i = 0; i < m; i++){	
		for(int j = 0; j < optionCnt[i]; j++){
			if(options[i].find(j+'a') != options[i].end() && wmaxcnt < wrongCnt[i][j]){
				wmaxcnt = wrongCnt[i][j];
			}
		}
	}
	//cout << "wmaxcnt=" << wmaxcnt << endl;
	if(wmaxcnt == 0) cout << "Too simple";
	else{
		for(int i = 0; i < m; i++){	
			for(int j = 0; j < optionCnt[i]; j++){
				//cout << wrongCnt[i][j] << "*";;
				if(wrongCnt[i][j] == wmaxcnt){
					cout << wmaxcnt << " ";
					char c = j+'a';
					cout << i+1 << "-" << c << endl;
				}
			}
		}
		//cout << endl;
	}
	return 0;
}
