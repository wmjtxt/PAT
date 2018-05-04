 ///
 /// @file    :patB1069.c
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-04 16:30:22(NewYork time)
 /// @quote   :
 ///
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int m,n,s,i=0,j=0,k;
  char *p[1000],*r[1000];
  scanf("%d%d%d",&m,&n,&s);
  for(i=0;i<m;i++)
  {
    p[i]=(char*)malloc(21);
    r[i]=(char*)malloc(21);
  }
  i=0;
  while(i<m)
  {
    scanf("%s",p[i]);
    i++;
  }
  i=s-1;
  if(m<=i)      //测试点2
  {
    printf("Keep going...\n");
    system("pause");
    return 0;
  }
  while(i<m)
  {
    r[j]=p[i];
    j++;
    if(i+n<m){
      i+=n;
    }else{
      break;
    }
    for(k=0;k<j;k++)
    {
      if(strcmp(p[i],r[k])==0)
      {
        i++;
        if(i==m){
          break;
        }else{
          k=-1;
          continue;
        }
      }
    }
  }
  for(k=0;k<j;k++)
  {
    puts(r[k]);
  }
  system("pause");
  return 0;
}