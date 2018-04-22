 ///
 /// @file    :patB1013.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:33:26(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <math.h>
using namespace std;

int isp(int n){
    int i;
    for(i = 2; i <= sqrt(n); i++)
        if(n%i == 0)
            return 0;
    return 1;
}

int main()
{
    int m, n;
    while(cin >> m >> n){
        int i = 2, j = 0;
        int c = 0;
        while(1){
            if(isp(i)){
                c++;
                if(c >= m && c < n){
                    j++;
                    if(j%10 != 0)
                        cout << i << " ";
                    else
                        cout << i << endl;
                }
                if (c == n){
                    cout << i;
                    break;
                }
            }
            i++;
        }
    }
    return 0;
}