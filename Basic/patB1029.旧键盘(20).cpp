 ///
 /// @file    :patB1029.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:30:56(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char a[81], b[81], c[81], d[81];
    cin >> a >> b;
    int i, j, k, m;
    for(i = 0, j = 0, k = 0; i < strlen(a), j < strlen(b); i++){
        if(a[i] != b[j]){
            c[k] = a[i];
            k++;
        }
        else j++;
    }
    if(i < strlen(a)){
        for(;i < strlen(a); i++){
            c[k] = a[i];
            k++;
        }
    }
    m = 1;
    for(i = 0; i < k; i++){
        if(c[i] >= 97) c[i] -= 32;
    }
    d[0] = c[0];
    for(i = 1; i < k; i++){
        for(j = 0; j < m; j++){
            if(c[i] == d[j]) break;
        }
        if(j == m){
            d[m] = c[i];
            m++;
        }
    }
    for(i = 0; i < m; i++) cout << d[i];
    return 0;
}