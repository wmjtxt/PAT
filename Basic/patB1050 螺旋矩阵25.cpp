 ///
 /// @file    :patB1050 螺旋矩阵25.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-17 17:15:33
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N, m, n;
	cin >> N;
	for(int i = 1; i*i <= N; i++){
		if(N%i == 0){
			n = i;
			m = N/i;
		}
	}
	vector<int> a(N);
	for(int i = 0; i < N; i++){
		cin >> a[i];
	}
	sort(a.begin(),a.end(),[](int x, int y){return x > y;});
	//for(auto item : a) cout << item << " ";
	//cout << endl;
	vector<vector<int> > res(m+1,vector<int>(n+1,0));
	int i = 0, j = -1, cnt = 0, flag = 0, ii = 1, jj = 0, mm = m, nn = n;
	while(cnt < N){
		j++;
		if(flag == 0){
			while(cnt < N && j < nn){
				res[i][j] = a[cnt];
				j++;
				cnt++;
			}
			j--;
			nn--;
			flag++;
		}
		if(flag == 1){
			i++;
			while(cnt < N && i < mm){
				res[i][j] = a[cnt];
				i++;
				cnt++;
			}
			i--;
			mm--;
			flag++;
		}
		if(flag == 2){
			j--;
			while(cnt < N && j >= jj){
				res[i][j] = a[cnt];
				j--;
				cnt++;
			}
			j++;
			jj++;
			flag++;
		}
		if(flag == 3){
			i--;
			while(cnt < N && i >= ii){
				res[i][j] = a[cnt];
				i--;
				cnt++;
			}
			i++;
			ii++;
			flag++;
			flag%=4;
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(j != 0)
				cout << " ";
			cout << res[i][j];
		}
		cout << endl;
	}
	return 0;
}
