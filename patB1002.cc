 ///
 /// @file    patB1002.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 03:53:08(NewYork time)
 /// @from    
 ///
 
#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	int sum = 0;
	string str[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	for(int i = 0; i < s.length(); ++i)
		sum += (s[i]-'0');
	string num = to_string(sum);
	for(int i = 0; i < num.length(); ++i){
		if(i != 0) cout << " ";
		cout << str[num[i]-'0'];
	}
	return 0;
}