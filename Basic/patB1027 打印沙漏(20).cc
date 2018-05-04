 ///
 /// @file    :patB1027.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:30:45(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //这是一道数列题？
    int n;
    char c;
    while(cin >> n >> c){
    int n1, n2, n3;
    n1 = sqrt((n-1)/2+1)-1;
    n2 = 2*n1 + 1;
    int i, j, k1;
    //cout << n1 << " " << n2 << endl;
    if(n2 == 1) cout << c <<endl;
    else{
        for(i = n2; i > 0; i-=2){
            j = i;
            k1 = (n2-j)/2;
            //k2 = (n2-j)/2;
            while(k1--) cout << " ";
            while(j--) cout << c;
            //while(k2--) cout << " ";
            cout << endl;
        }
        for(i = 3; i <= n2; i+=2){
            j = i;
            k1 = (n2-j)/2;
            //k2 = (n2-j)/2;
            while(k1--) cout << " ";
            while(j--) cout << c;
            //while(k2--) cout << " ";
            cout << endl;
        }
    }
    n3 = n - 2*n1*(n1+2) - 1;
    cout << n3 << endl;
    }
    return 0;
}