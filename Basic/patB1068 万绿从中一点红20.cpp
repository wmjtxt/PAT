 ///
 /// @file    :patB1068 万绿从中一点红20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-27 19:29:43
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int m, n, tol;
vector<vector<int> > mat;

bool isred(int i, int j){
	if(i > 0 && j > 0 && mat[i][j] - mat[i-1][j-1] <= tol && mat[i-1][j-1] - mat[i][j] <= tol) return false;
	if(i > 0 && mat[i][j] - mat[i-1][j] <= tol && mat[i-1][j] - mat[i][j] <= tol) return false;
	if(i > 0 && j+1 < m && mat[i][j] - mat[i-1][j+1] <= tol && mat[i-1][j+1] - mat[i][j] <= tol) return false;
	if(j > 0 && mat[i][j] - mat[i][j-1] <= tol && mat[i][j-1] - mat[i][j] <= tol) return false;
	if(j+1 < m && mat[i][j] - mat[i][j+1] <= tol && mat[i][j+1] - mat[i][j] <= tol) return false;
	if(i+1 < n && j > 0 && mat[i][j] - mat[i+1][j-1] <= tol && mat[i+1][j-1] - mat[i][j] <= tol) return false;
	if(i+1 < n && mat[i][j] - mat[i+1][j] <= tol && mat[i+1][j] - mat[i][j] <= tol) return false;
	if(i+1 < n && j+1 < m && mat[i][j] - mat[i+1][j+1] <= tol && mat[i+1][j+1] - mat[i][j] <= tol) return false;
	return true;
}

int main(){
	cin >> m >> n >> tol;
	mat.resize(n,vector<int>(m));
	map<int,int> cnt;
	int k = 0, x = 0, y = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> mat[i][j];
			cnt[mat[i][j]]++;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(cnt[mat[i][j]] == 1 && isred(i,j)){
				k++;
				x = j;
				y = i;
			}
		}
	}
	if(k == 0){
		cout << "Not Exist" << endl;
	}
	else if(k == 1){
		cout << "(" << x+1 << ", " << y+1 << "): " << mat[y][x] << endl;
	}
	else{
		cout << "Not Unique" << endl;
	}
	return 0;
}
