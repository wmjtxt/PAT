 ///
 /// @file    :patB1049 数列的片段和20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-17 16:38:31
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	double res = 0.0, tmp;
	cin >> n;
	//vector<int> a(n);
	//for(int i = 0; i < n; i++){
	//	a[i] = (i+1)*(n-i);
	//}
	for(int i = 0; i < n; i++){
		cin >> tmp;
		res +=  tmp*(i+1)*(n-i);
	}
	printf("%0.2f\n",res);
	return 0;
}
