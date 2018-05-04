 ///
 /// @file    :patB1017.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:29:37(NewYork time)
 /// @quote   :
 ///
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[1001] = {'\0'};
    int B;
    while(scanf("%s %d", A, &B) != EOF){
        int i = 0;
        int R;
        int len = strlen(A);
        int aa, aaa, rr = 0;
        //printf("%s %d\n", A, B);
        while(i < len && B != 0){
            aa = rr * 10 + (A[i] - '0');
            if(i != 0 && aa < B && i != len-1) printf("%d",0);
            //printf("%d", aa);
            if(aa >= B){
                //R = aa % B;
                aaa = aa/B;
                rr = aa % B;
                printf("%d",aaa);
                i++;
            }
            else if(A[i+1]!='\0'){
                aa = 10*(A[i] - '0') + A[i+1] - '0';
                rr = aa % B;
                //printf("%d",aa / B);
                aaa = aa/B;
                printf("%d",aaa);
                i+=2;
            }
            else {// 第一次修改添加
                aaa = aa/B;
                printf("%d",aaa);
                i++;
            }
        }
        R = aa%B;
        printf(" %d", R);
    }
    return 0;
}
