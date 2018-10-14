 ///
 /// @file    :patB1044 火星数字(20分).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-14 17:35:14
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	vector<string> s1 = {"jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	vector<string> s2 = {"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	map<string,int> s3 = {{"jan",1},{"feb",2},{"mar",3},{"apr",4},{"may",5},{"jun",6},{"jly",7},{"aug",8},{"sep",9},{"oct",10},{"nov",11},{"dec",12}};
	map<string,int> s4 = {{"tam",13},{"hel",26},{"maa",39},{"huh",52},{"tou",65},{"kes",78},{"hei",91},{"elo",104},{"syy",117},{"lok",130},{"mer",143},{"jou",156}};
	int N;
	cin >> N;
	int i = 0;
	while(i < N+1){
		string tmp;
		int num;
		getline(cin,tmp);
		if(tmp[0] >= '0' && tmp[0] <= '9'){
			num = stoi(tmp);
			if(num == 0) cout << "tret" << endl;
			else{
				num > 13 && num%13 != 0 && cout << s2[num/13-1] << " " << s1[num%13-1];
				num%13 == 0 && cout << s2[num/13-1];
				num < 13 && cout << s1[num%13-1];
				cout << endl;
			}
		}
		else if(tmp[0] >= 'a' && tmp[0] <= 'z'){
			int len = tmp.size();
			if(tmp == "tret")
				num = 0;
			else{
				string str1 = tmp.substr(0,3);
				//cout << "str1 = " << str1 << endl;
				//cout << "len = " << len << endl;
				if(len == 3){
					if(s3.find(str1) != s3.end()) 
						num = s3.find(str1)->second;
					else if(s4.find(str1) != s4.end())
						num = s4.find(str1)->second;
				}
				else if(len == 7){
					string str2 = tmp.substr(4,3);
					//cout << "str2 = " << str2 << endl;
					num = s3[str2] + s4[str1];
				}
			}
			cout << num << endl;
		}
		i++;
	}
	return 0;
}
