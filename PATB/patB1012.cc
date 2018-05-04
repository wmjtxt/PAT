 ///
 /// @file    :patB1012.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:08:25(NewYork time)
 /// @quote   :
 ///

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int a[1001];
    int i;
    int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
    int isA1exist = 0, isA2exist = 0, isA5exist = 0;
    int flag2 = 0;
    float A4 = 0.0;
    int count4 = 0;
    while(cin >> n){
      for(i = 0; i < n; i++){
        cin >> a[i];
      }
      //for(i = 0; i < n; i++)cout << a[i] <<"/";
      for(i = 0; i < n; i++){
        if(a[i]%10 == 0){
          A1 += a[i];
          isA1exist++;
        }
      }
      for(i = 0; i < n; i++){
        if(a[i]%5 == 1 && flag2 == 0){
          A2 += a[i];
          flag2 = 1;
          isA2exist++;
          continue;
        }
        if(a[i]%5 == 1 && flag2 == 1){
          A2 -= a[i];
          flag2 = 0;
          isA2exist++;
          continue;
        }
      }
      for(i = 0; i < n; i++){
        if(a[i]%5 == 2){
          A3++;
        }
      }
      for(i = 0; i < n; i++){
        if(a[i]%5 == 3){
          A4 += a[i];
          count4++;
        }
      }
      A4 = A4 / count4;
      for(i = 0; i < n; i++){
        if(a[i]%5 == 4){
          if(A5 < a[i]){
            A5 = a[i];
            isA5exist++;
          }
        }
      }
      if(isA1exist == 0) cout << "N" << " ";
      else cout << A1 << " ";
      if(isA2exist == 0) cout << "N" << " ";
      else cout << A2 << " ";
      if(A3 == 0) cout << "N" << " ";
      else cout << A3 << " ";
      if(count4 == 0) cout << "N" << " ";
      else cout << setiosflags(ios::fixed) << setprecision(1) << A4 << " ";
      if(isA5exist == 0) cout << "N";
      else cout << A5;
    }
    return 0;
}
