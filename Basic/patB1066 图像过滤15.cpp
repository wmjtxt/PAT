 ///
 /// @file    :patB1066 图像过滤15.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-26 19:31:08
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int m, n, a, b, value;
	cin >> m >> n >> a >> b >> value;
	vector<vector<int> > graph(m,vector<int>(n));
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> graph[i][j];
		}
	}
	string gray;
	if(value >= 0 && value < 10)
		gray = "00" + to_string(value);
	else if(value >= 10 && value < 100)
		gray = "0" + to_string(value);
	else
		gray = to_string(value);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(j != 0) cout << " ";
			if(graph[i][j] >= a && graph[i][j] <= b){
				cout << gray;
			}
			else if(graph[i][j] >= 10 && graph[i][j] < 100){
				cout << "0" << graph[i][j];
			}
			else if(graph[i][j] < 10){
				cout << "00" << graph[i][j];
			}
			else 
				cout << graph[i][j];
		}
		cout << endl;
	}
	return 0;
}
