 ///
 /// @file    patB1004.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 05:01:03(NewYork time)
 /// @from    liuchuo(柳婼)
 ///
 
#include <iostream>
using namespace std;

int main(){
	int n,max = -1,min = 101,score;
	cin >> n;
	string maxname,minname,maxnum,minnum,name,num;
	for(int i = 0; i < n; ++i){
		cin >> name >> num >> score;
		if(max < score){
			max = score;
			maxname = name;
			maxnum = num;
		}
		if(min > score){
			min = score;
			minname = name;
			minnum = num;
		}
	}
	cout << maxname << " " << maxnum << "\n" << minname << " " << minnum << endl;;
	return 0;
}
