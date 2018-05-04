 ///
 /// @file    :patB1016.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:29:28(NewYork time)
 /// @quote   :
 ///
 
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    char A[11], B[11];
    int DA, DB;
    int cntA, cntB, PA, PB;
    int i, j;
    while(scanf("%s%d%s%d", A, &DA, B, &DB) != EOF){
        cntA = cntB = PA = PB = 0;
        for(i = 0; i < strlen(A); i++){
            if(A[i] - '0' == DA){
                cntA++;
            }
        }
        for(i = 0; i < strlen(B); i++){
            if(B[i] - '0' == DB){
                cntB++;
            }
        }
        //printf("%d %d ",cntA,cntB);
        for(i = 0; i < cntA; i++){
            j = i;
            if(j == 0) PA = DA;
            else {
                DA *= 10;
                PA += DA;
            }
        }
        for(i = 0; i < cntB; i++){
            j = i;
            if(j == 0) PB = DB;
            else {
                DB *= 10;
                PB += DB;
            }
        }
        printf("%d",PA+PB);
    }
    return 0;
}
