 ///
 /// @file    :patB1062 最简分数20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-24 20:47:22
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

bool iscoprime(int a, int b){
	for(int i = 2; i <= a && i <= b; i++){
		if(a%i == 0 && b%i == 0)
			return false;
	}
	return true;
}
int main(){
	int n1,m1,n2,m2,k;
	scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
	if(n1*m2 > n2*m1){
		swap(n1,n2);
		swap(m1,m2);
	}
	double d1,d2;
	d1 = 1.0*n1/m1;
	d2 = 1.0*n2/m2;
	int flag = 0;
	for(int i = 1; i < k; i++){
		double tmp = 1.0*i/k;
		if(tmp > d1 && tmp < d2 && iscoprime(i,k)){
			if(flag != 0) printf(" ");
			else flag++;
			printf("%d/%d",i,k);
		}
	}
	return 0;
}
