 ///
 /// @file    :patB1042 字符统计(20分).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-12 16:33:54(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	string str;
	getline(cin, str);
	vector<int> cnt(26,0);
	for(int i = 0; i < str.size(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if(str[i] >= 'a' && str[i] <= 'z'){
			cnt[str[i]-'a']++;
		}
	}
	for(auto item : cnt)
		cout << item << " ";
	cout << endl;
	char c = 'a';
	int maxc = cnt[0];
	for(int i = 1; i < 26; i++){
		if(cnt[i] > maxc){
			maxc = cnt[i];
			c = 'a' + i;
		}
	}
	cout << c << " " << maxc << endl;
	return 0;
}
