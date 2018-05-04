 ///
 /// @file    :patB1031.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:31:17(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
    int a[18] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int n, i;
    char ma[12]= "10X98765432";//{1,0,'X',9,8,7,6,5,4,3,2};
    cin >> n;
    int flag[n+1] = {0};
    char *c[n];
    for(i = 0; i < n; i++) c[i] = new char[19];
    for(i = 0; i < n; i++) cin >> c[i];
    //for(i = 0; i < n; i++) cout << c[i] << endl;
    for(i = 0; i < n; i++){
        //cout << "i=" << i << ":" <<endl;
        int b[18] = {0};
        int z, m;
        int len = strlen(c[i]);
        int sum = 0;
        int j;
        for(j = 0; j < len-1; j++) b[j] = c[i][j] - '0';
        //for(j = 0; j < len-1; j++) cout << b[j];cout << endl;
        m = c[i][17] - '0';//cout << "m=" << m << endl;
        for(j = 0; j < len-1; j++){
            sum += a[j]*b[j];
        }
        z = sum%11;//cout << z << m << endl;
        for(j = 0; j < 11; j++){
            if(ma[j]-'0' == m) break;
        }
        //cout << "j=" << j << endl;
        if(j == z){
            flag[i] = 1;
        }
        else{
            cout << c[i] << endl;
        }
    }
    //cout <<"i=" << i <<endl;
    for(i = 0; i < n; i++){
        if(flag[i] != 1) {
            break;
        }
    }
    if(i == n) flag[n] = 1;
    if(flag[n]) cout << "All passed" << endl;//
    return 0;
}