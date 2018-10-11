 ///
 /// @file    :patB1040 有几个PAT(25分).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-11 18:40:47(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	string s;
	while(cin >> s){
		int res = 0;
		int n = s.size();
		int leftT = 0, totalT = 0, leftP = 0;
		for(int i = 0; i < n; i++)
			if(s[i] == 'T')
				totalT++;
		for(int i = 0; i < n; i++){
			if(s[i] == 'P')
				leftP++;
			if(s[i] == 'T')
				leftT++;
			if(s[i] == 'A'){
				res += leftP * (totalT - leftT);
				res%=1000000007;
			}
		}
		cout << res%1000000007 << endl;
	}
	return 0;
}
