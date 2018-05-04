 ///
 /// @file    :patB1019.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:29:51(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    if(a != b) return a > b;
}
bool rev(int a, int b){
    if(a != b) return a < b;
}


int main()
{
    int n;
    while(cin >> n){
    if(n==6174)
      cout << 7641 << " - " << 1467 << " = " << 6174 << endl;
    while(n!=6174){
        int a[4];
        int i;
        int firstnum = 0, secondnum = 0;
        a[0] = (int)(n/1000);
        a[1] = (int)((n - a[0]*1000)/100);
        a[2] = (int)((n - a[0]*1000 - a[1]*100)/10);
        a[3] = (int)(n%10);
        if(a[0]==a[1] && a[1]==a[2] && a[2]==a[3]){
            for(i = 0; i < 4; i++) cout << a[i];
            cout << " - ";
            for(i = 0; i < 4; i++) cout << a[i];
            cout << " = " << "0000";
            break;
        }
        else{
            sort(a, a+4,cmp);
            firstnum = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
            for(i = 0; i < 4; i++) cout << a[i];
            sort(a, a+4, rev);
            secondnum = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
            cout << " - ";
            for(i = 0; i < 4; i++) cout << a[i];
            cout << " = ";
            n = firstnum - secondnum;
            a[0] = (int)(n/1000);
            a[1] = (int)((n - a[0]*1000)/100);
            a[2] = (int)((n - a[0]*1000 - a[1]*100)/10);
            a[3] = (int)(n%10);
            for(i = 0; i < 4; i++) cout << a[i];
            cout << endl;
        }
    }
    }
    return 0;
}
