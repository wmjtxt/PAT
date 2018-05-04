 ///
 /// @file    patB1007.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 05:42:30(NewYork time)
 /// @from    
 ///
 
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int cnt = 0;
		int i,j,k,m;
		int p[50000];
		p[0] = 2;
		k = 1;
		for(i = 3;i <= n; i++){
			m = sqrt(i);
			for(j = 2; j <= m; j++){
				if(i % j == 0) break;
			}
			if(j > m){
				p[k] = i;
				k++;
			}
		}
		for(i = 1; i < k; i++){
			if((p[i] - p[i-1]) == 2) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
