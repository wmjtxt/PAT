 ///
 /// @file    :patB1021.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:30:05(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string N;
    cin >> N;
    int len = N.length();
    int i = 0;
    int a[10] = {0};
    while(i<len){
        switch(N[i]){
          case '0' : a[0]++;break;
          case '1' : a[1]++;break;
          case '2' : a[2]++;break;
          case '3' : a[3]++;break;
          case '4' : a[4]++;break;
          case '5' : a[5]++;break;
          case '6' : a[6]++;break;
          case '7' : a[7]++;break;
          case '8' : a[8]++;break;
          case '9' : a[9]++;break;
        }
        i++;
    }
    for(i = 0; i < 10; i++){
        if(a[i] != 0) cout << i << ":" << a[i] << endl;
    }
    return 0;
}