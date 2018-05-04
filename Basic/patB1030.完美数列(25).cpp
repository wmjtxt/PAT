 ///
 /// @file    :patB1030.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:31:03(NewYork time)
 /// @quote   :
 ///
 
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    double p;
    while(scanf("%d%lf",&n,&p) != EOF){
        double a[n];
        int i, j, num = 0;
        for(i = 0; i < n; i++) scanf("%lf",&a[i]);
        sort(a, a+n);
        /*for(i = 0,j = n-1; i <= j; i++, j--){
            if(a[j] > a[i]*p){
                n--;
            }
            else
        }*/
        for(i = 0; i < n; i++){
            for(j = i+num; j < n; j++){
                if(a[j] > a[i]*p){
                    break;
                }
                if(j-i+1 > num){
                    num = j-i+1;
                }
            }
        }
        //for(i = 0; i < n; i++) printf("%d ",b[i]);
        //sort(b, b+k);
        printf("%d\n", num);
    }
    return 0;
}