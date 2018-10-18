 ///
 /// @file    :patB1052 卖个萌20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-18 17:07:26
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

vector<string> fun(string s){
	vector<string> res;
	for(int i = 0; i < s.size(); i++){
		string tmp = "";
		if(s[i] == '['){
			i++;
			while(s[i] != ']'){
				tmp += s[i++];
			}
			res.push_back(tmp);
		}
	}
	return res;
}

int main(){
	vector<string> hand, eye, mouth;
	string h, e, m;
	getline(cin, h);
	getline(cin, e);
	getline(cin, m);

	hand = fun(h);
	eye = fun(e);
	mouth = fun(m);
	int hs = hand.size();
	int es = eye.size();
	int ms = mouth.size();
	int k;
	cin >> k;
	for(int i = 0; i < k; i++){
		int lh,le,mo,re,rh;
		cin >> lh >> le >> mo >> re >> rh;
		if(lh > 0 && lh <= hs && le > 0 && le <= es && mo > 0 && mo <= ms && re > 0 && re <= es && rh > 0 && rh <= hs)
			cout << hand[lh-1] << "(" << eye[le-1] << mouth[mo-1] << eye[re-1] << ")" << hand[rh-1] << endl;
		else 
			cout << "Are you kidding me? @\\/@" << endl;
	}
	return 0;
}
