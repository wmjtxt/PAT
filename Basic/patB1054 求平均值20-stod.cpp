 ///
 /// @file    :patB1054 求平均值20-stod.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-19 18:13:49
 /// @quote   :
 ///

//有一个测试点过不去，不指定为什么
//几乎所有的测试我都想到了啊
//2. .2 a -1000.01 2a a2 2.3. 2.3.4

#include <iostream>
#include <math.h> 
using namespace std; 
int main(){
	int n;
	cin >> n;
	double sum = 0.0;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		string tmp;
		cin >> tmp;
		double num = 0.0, dec = 0.0;
		char c = '+';
		//整数部分
		int j = 0, m = tmp.size(), cnti = 0;
		if(tmp[0] == '+') {
			j++;
		}
		if(tmp[0] == '-') {
			c = tmp[0];
			j++;
		}
		if(j == m){//+,-
			cout << "ERROR: " << tmp << " is not a legal number" << endl;
			continue;
		}
		while(tmp[j] != '.' && j < m && tmp[j] >= '0' && tmp[j] <= '9'){
			num = 10*num + double(tmp[j] - '0');
			j++;
			cnti++;
		}
		if(j == m){
			if(c == '-')
				num = -num;
			if(num >= -1000.00 && num <= 1000.00){
				sum += num;
				cnt++;
				continue;
			}
			else{//-1001
				cout << "ERROR: " << tmp << " is not a legal number" << endl;
			}
		}
		else if(tmp[j] == '.'){//小数部分
			if(cnti == 0){//.2
				cout << "ERROR: " << tmp << " is not a legal number" << endl;
				continue;
			}
			j++j;
			//注释掉下面几行就过了，好坑啊
			//if(j == m){//2.  
			//	cout << "ERROR: " << tmp << " is not a legal number" << endl;
			//	continue;
			//}
			int f = 1;
			while(f <= 2 && j < m && tmp[j] >= '0' && tmp[j] <= '9'){
				dec = dec+1.0*(tmp[j] - '0')/pow(10,f);
				f++;
				j++;
			}
			if(j == m){
				if(c == '-'){
					num = -num;
					dec = -dec;
				}
				if(num+dec >= -1000.00 && num+dec <= 1000.00){
					sum = sum + num + dec;
					cnt++;
					continue;
				}
				else{//-1000.1
					cout << "ERROR: " << tmp << " is not a legal number" << endl;
				}
			}
			else{//2.a
				cout << "ERROR: " << tmp << " is not a legal number" << endl;
			}
		}
		else{//a
			cout << "ERROR: " << tmp << " is not a legal number" << endl;
		}
	}
	if(cnt == 0)
		printf("The average of %d numbers is Undefined\n", cnt);
	else if(cnt == 1)
		printf("The average of %d number is %.2lf\n", cnt, sum);
	else 
		printf("The average of %d numbers is %.2lf\n", cnt, double(sum/cnt));
	return 0;
}
