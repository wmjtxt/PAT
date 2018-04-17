 ///
 /// @file    patB1005.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 05:15:42(NewYork time)
 /// @from    
 ///
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[10000];
bool cmp(int a,int b){return a > b;}

int main(){
	int k,n,flag = 0;
	cin >> k;
	vector<int> v(k);
	for(int i = 0; i < k; i++){
		cin >> n;
		v[i] = n;
		while(n!=1){
			if(n%2!=0) n = 3*n+1;
			n/=2;
			arr[n] = 1;
		}
	}
	sort(v.begin(),v.end(),cmp);
	for(int i = 0; i < v.size(); i++){
		if(arr[v[i]] == 0){
			if(flag == 1) cout << " ";
			cout << v[i];
			flag = 1;
		}
	}
	return 0;
}
