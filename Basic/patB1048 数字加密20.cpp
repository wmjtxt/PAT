 ///
 /// @file    :patB1048 数字加密20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-17 15:20:09
 /// @quote   :
 ///
 
#include <iostream>
#include <vector>
using namespace std;

int main(){
	string A, B;
	vector<char> odd = {'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
	cin >> A >> B;
	int m = A.size(), n = B.size();
	int flag = 1;//奇偶
	string res = "";
	/* 分三种情况
	 * m == n
	 * m < n,B(n-1>= i >= n-m,...,1,0),A(m-1>= i-n+m >=0,'0',...,'0'),A的高位用'0'补充
	 * m > n,B的高位用0补充,B(n-1>= i >=0,0,...,0),A(m-1>= i-n+m >=m-n,...,0)
	 */
	if(m > n)
		B.insert(0,m-n,'0');
	if(n > m)
		A.insert(0,n-m,'0');
	for(int i = A.size()-1; i >= 0; i--){
		if(flag == 1){
			res.insert(0,1,odd[(A[i]-'0' + B[i]-'0')%13]);
			flag = 0;
		}
		else if(flag == 0){
			res.insert(0,1,odd[(B[i]-A[i]+10)%10]);
			flag = 1;
		}
	}
	cout << res << endl;
	return 0;
}
