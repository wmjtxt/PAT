 ///
 /// @file    :patB1011.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-17 20:52:36(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
      long long int A[10], B[10], C[10];
      int i;
      for(i = 0; i < n; i++){
        cin >> A[i] >> B[i] >> C[i];
      }
      for(i = 0; i < n; i++){
          if(A[i] + B[i] > C[i]){
            cout << "Case #" << i+1 << ": " << "true" << endl;
          }
          else{
            cout << "Case #" << i+1 << ": " << "false" <<endl;
          }
      }
    }
    return 0;
}