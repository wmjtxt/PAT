 ///
 /// @file    patB1009.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 06:31:39(NewYork time)
 /// @from    liuchuo(柳婼)
 ///
 
#include <iostream>
#include <stack>
using namespace std;

int main(){
	string str;
	stack<string> s;
	while(cin >> str){
		s.push(str);
	}
	cout << s.top();
	s.pop();
	while(!s.empty()){
		cout << " " << s.top();
		s.pop();
	}
	return 0;
}
