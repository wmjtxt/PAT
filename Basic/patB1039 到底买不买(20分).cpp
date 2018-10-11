 ///
 /// @file    :patB1039 到底买不买(20分).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-11 18:26:54(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a(256,0);
	string s,p;
	while(cin >> s >> p){
		int cnt = 0, m = s.size(), n = p.size();
		for(int i = 0; i < m; i++){
			a[s[i]]++;
		}
		for(int i = 0; i < n; i++){
			a[p[i]]--;
			if(a[p[i]] < 0) cnt++;
		}
		if(cnt == 0)
			cout << "Yes " << m-n << endl;
		else
			cout << "No " << cnt << endl;
	}
	return 0;
}
