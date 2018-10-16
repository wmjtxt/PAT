 ///
 /// @file    :patB1045 快速排序(25分).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-16 12:33:52
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<int> inp(N), res;
	for(int i = 0; i < N; i++)
		cin >> inp[i];
	for(int i = 0; i < N; i++){
		int lflag = 1, rflag = 1;
		for(int j = 0; j < i; j++){
			if(inp[j] > inp[i]){
				lflag = 0;
				break;
			}
		}
		for(int k = i+1; k < N; k++){
			if(inp[k] < inp[i]){
				rflag = 0;
				break;
			}
		}
		if(lflag && rflag)
			res.push_back(inp[i]);
	}
	int m = res.size();
	cout << m << endl;
	if(m > 0){
		for(int i = 0; i < m-1; i++){
			cout << res[i] << " ";
		}
		cout << res[res.size()-1] << endl;
	}
	return 0;
}
