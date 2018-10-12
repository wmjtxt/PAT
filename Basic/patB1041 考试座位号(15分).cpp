 ///
 /// @file    :patB1041 考试座位号(15分).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-12 08:55:21(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <unordered_map>
using namespace std;


int main(){
	int N, M;
	cin >> N;
	unordered_map<int,pair<string,int>> in;
	string s;
	int x,y;
	for(int i = 0; i < N; i++){
		cin >> s >> x >> y;
		in.insert({x,make_pair(s,y)});
	}
	cin >> M;
	int tmp;
	for(int i = 0; i < M; i++){
		cin >> tmp;
		cout << in[tmp].first << " " << in[tmp].second << endl;
	}
	return 0;
}
