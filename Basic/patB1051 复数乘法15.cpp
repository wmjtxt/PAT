 ///
 /// @file    :patB1051 复数乘法15.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-18 11:31:19(NewYork time)
 /// @quote   :
 ///
//类似题目: LeetCode 537

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double r1, p1, r2, p2;
	cin >> r1 >> p1 >> r2 >> p2;
	double a = 0.0, b = 0.0;
	char bs = '+';
	//compute a
	a = r1*r2*(cos(p1)*cos(p2) - sin(p1)*sin(p2));
	//compute b
	b = r1*r2*(cos(p1)*sin(p2) + cos(p2)*sin(p1));
	//if(b < 0){
	//	b = -b;
	//	bs = '-';
	//}
	if(a + 0.005 >= 0 && a < 0)
		printf("0.00");
	else 
		printf("%.2f",a);
	if(b > 0)
		printf("+%.2fi", bs, b);
	//else if(b + 0.005 >= 0 && b < 0)
	//	printf("+0.00i");
	else if(b+0.005 < 0)
		printf("%.2fi",b);

	//if(r1 == 0.0 || r2 == 0.0)
	//	printf("0.00"); 
	//else if(b < 0.0)
	//	printf("%.2f", a); 
	//else	
	//	printf("%.2f%c%.2fi", a, bs, b); 
	return 0;
}
