 ///
 /// @file    :patB1043 输出PATest(20分).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-13 20:38:08
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	string str;
	cin >> str;
	string pat = "PATest";
	vector<int> cnt(6,0);
	for(int i = 0; i < str.size(); i++){
		int tmp = pat.find(str[i]);
		if(tmp != -1){
			cnt[tmp]++;
		}
	}
	while(1){
		int cntZero = 0;
		for(int i = 0; i < cnt.size(); i++){
			if(cnt[i] != 0){
				cout << pat[i];
				cnt[i]--;
			}
			else 
				cntZero++;
		}
		if(cntZero == cnt.size())
			break;
	}
	cout << endl;
	return 0;
}
