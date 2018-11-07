 ///
 /// @file    :patA1001 A+B Format20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-11-07 11:02:08
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int a, b, sum;
	cin >> a >> b;
	sum = a + b;
	string res = "";
	if(sum < 0) {
		cout << "-";
		sum = -sum;
	}
	int cnt = 0;
	if(sum == 0) cout << sum << endl;
	while(sum > 0){
		res += to_string(sum%10);
		cnt++;
		sum /= 10;
		if(cnt%3 == 0 && sum > 0) res += ",";
	}
	for(int i = res.size()-1; i >= 0; i--)
		cout << res[i];
	cout << endl;
	return 0;
}
