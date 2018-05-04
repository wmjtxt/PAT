 ///
 /// @file    :patB1020.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:29:58(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N, D;
    int i;
    cin >> N >> D;
    float Stock[N], Price[N];
    for(i = 0; i < N; i++) cin >> Stock[i];
    for(i = 0; i < N; i++) cin >> Price[i];
    float UnitPrice[N];
    for(i = 0; i < N; i++) UnitPrice[i] = Price[i] / Stock[i];
    //for(i = 0; i < N; i++) cout << UnitPrice[i] << "=";
    float Sortbuf[N];
    float UnitPrice2[N];
    for(i = 0; i < N; i++) UnitPrice2[i] = UnitPrice[i];
    float temp;
    int j, k = 0, r;
    for(i = 0; i < N; i++){
        r = 0;
        temp = 0.0;
        for(j = 0; j < N; j++){
          if(temp < UnitPrice2[j]){
              temp = UnitPrice2[j];
              r = j;
          }
        }
        UnitPrice2[r] = 0.0;//This is my idea.
        //temp = UnitPrice[r];UnitPrice[r] = UnitPrice[i];UnitPrice[i] = temp;
        Sortbuf[k] = r;
        k++;
    }
    //for(i = 0; i < N; i++) cout << Sortbuf[i] << "-";
    int s;
    float Profit = 0.0;
    //while(D!=0){
        for(i = 0; i < N; i++){
            s = Sortbuf[i];
            if(D <= Stock[s]){
                Profit += D * UnitPrice[s];
                D = 0;
            }
            else {
                Profit += Stock[s] * UnitPrice[s];
                D -= Stock[s];
            }
        }
    cout << setprecision(2) << fixed << Profit << endl;
    return 0;
}
