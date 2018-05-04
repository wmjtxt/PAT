 ///
 /// @file    :patB1033.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:31:27(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
    char a[100000], b[100000], c[100000];
    gets(a);
    cin >> b;
    if(a == NULL) cout << b;
    else{
        int i, j, k;
        int lena = strlen(a), lenb = strlen(b);
        k = 0;
        for(j = 0; j < lena; j++){
            if(a[j] >=65 && a[j] <= 90) a[j] += 32;
        }
        //cout << a;
        for(i = 0; i < lenb; i++){
            for(j = 0; j < lena; j++){
                if(b[i] == a[j]){
                    //cout << "if" << endl;
                    break;
                }
                else if(b[i] >= 65 && b[i] <= 90 && b[i] == a[j] - 32){
                    j = lena;
                }
                else if(b[i] >= 65 && b[i] <= 90 && a[j] == '+'){
                    //cout << "else if" << endl;
                    //b[i] += 32;
                    j = lena;
                }
            }
            if(j == lena){
                c[k] = b[i];
                k++;
            }
        }
        //cout << a << endl << b << endl;
        cout << c << endl;
    }
    //printf("%d %d %d %d %d %d %d %d", 'A', 'Z', 'a', 'z', '_', ',', '.', '-');
    system("PAUSE");
    return 0;
}