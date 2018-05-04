 ///
 /// @file    patB1004.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 05:01:03(NewYork time)
 /// @quote   null
 ///
 
#include <stdio.h>
#include <stdlib.h>

struct E{
  char name[11];
  char stu_id[11];
  int grade;
}buf[1000];

int main()
{
    int n;
    while(scanf("%d", &n) != EOF){
        int i, j, k;
        int imax = 0, imin = 0;
        for(i = 0; i < n; i++){
            scanf("%s%s%d",buf[i].name, buf[i].stu_id, &buf[i].grade);
        }//input
        for(j = 1; j < n; j++){
            if(buf[j].grade > buf[imax].grade) imax = j;
        }//search max
        for(k = 1; k < n; k++){
            if(buf[k].grade < buf[imin].grade) imin = k;
        }//search min
        printf("%s %s\n", buf[imax].name, buf[imax].stu_id);
        printf("%s %s",buf[imin].name, buf[imin].stu_id);
    }
    return 0;
}
