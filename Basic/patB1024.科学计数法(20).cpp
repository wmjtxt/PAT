 ///
 /// @file    :patB1024.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:30:27(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[10000];
    int a[10000];
    while(cin >> s){
    int len = strlen(s);
    int i, j = 0;
    int Ead = 4;//E的初始位置
    int e[4], k = 0, ee;
    int flag = 0;
    for(i = 0; i < len; i++){
        if(s[i] == 'E') break;
        if(s[i] != '.'&& s[i] != '+' && s[i] != '-'){
            a[j] = s[i] - '0';
            j++;
        }
    }
    if(s[0] == '-') {
        cout << "-";
    }
    for(i = 4; i < len; i++,Ead++){
       if(s[i] == 'E'){
            if(s[i+1] == '-'){
               cout << "0.";
               flag = 1;
            }
       break;
       }
    }
    //cout << flag2 << endl;
    //cout << "E:" << Ead << endl;
    for(i = Ead + 2; i < len; i++){
        e[k] = s[i] - '0';
        k++;
    }
    //cout << k << "k";
    //for(i = 0; i < k; i++) cout << e[i];cout << endl;
    ee = e[k-1];
    //cout << ee << endl;
    for(i = k-2; i >= 0; i--){
        int temp = k-1-i;
        while(temp--) e[i] *= 10;
        ee += e[i];
    }
    //cout << ee << endl;
    if(flag == 1){
        for(i = 0; i < ee-1; i++) cout << 0;
        for(i = 0; i < j; i++) cout << a[i];
    }
    //cout << j << ee;break;
    if(flag == 0){
        if(j <= ee+1){
            for(i = 0; i < j; i++) cout << a[i];
            int temp2 = ee - j + 1;
            while(temp2--) cout << 0;
        }
        else if(j > ee+1){
            for(i = 0; i < ee+1; i++) cout << a[i];
            cout << ".";
            for(i = ee+1; i < j; i++) cout << a[i];
        }
    }
    }
    return 0;
}