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
    long long p;
    while(scanf("%d%lld",&n,&p) != EOF){
        long long a[n];
        int i, j, num = 0;
        for(i = 0; i < n; i++) scanf("%lld",&a[i]);
        sort(a, a+n);
        for(i = 0; i < n; i++){
            for(j = i+num; j < n; j++){
                if(a[j] > a[i]*p)
					break;
				if(num < j-i+1){
                    num = j-i+1;
                }
            }
        }
        printf("%d\n", num);
    }
    return 0;
}
