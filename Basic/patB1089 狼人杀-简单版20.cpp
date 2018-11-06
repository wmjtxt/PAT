 ///
 /// @file    :patB1089 狼人杀-简单版20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-06 21:35:39
 /// @quote   :
 ///
 
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	string tmp;
	vector<pair<char,int> > v(n+1);
	for(int i = 0; i < n; i++){
		cin >> tmp;
		v[i+1].first = tmp[0];
		v[i+1].second = stoi(tmp.substr(1));
	}
	int cnt, flag;
	bool res = false;
	for(int i = 1; i <= n; i++){
		for(int j = i+1; j <= n; j++){
			cnt = 0;
			flag = 0;
			vector<char> wolf(n+1,'+');
			vector<bool> lie(n+1,false);
			wolf[i] = wolf[j] = '-';
			for(int i = 1; i <= n; i++){
				if(v[i].first != wolf[v[i].second]){
					cnt++;
				}
				else{
					lie[i] = true;
				}
			}
			//cout << "(i,j) = (" << i << "," << j << ")"<< endl;
			//cout << "cnt = " << cnt << endl;
			//cout << "lie[i] = " << lie[i] << endl;
			//cout << "lie[j] = " << lie[j] << endl;
			if(lie[i] && !lie[j] || !lie[i] && lie[j]) flag = 1;
			if(cnt == 2 && flag){
				cout << i << " " << j << endl;
				res = true;
				i = n;
				j = n;
			}
		}
	}
	if(!res)
		cout << "No Solution" << endl;
	return 0;
}
