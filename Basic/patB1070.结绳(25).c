 ///
 /// @file    :patB1070.c
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-05-04 16:31:18(NewYork time)
 /// @quote   :
 ///
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,a[10000],maxrope=0,tmp,i=0,j=0;
  scanf("%d",&n);
  while(i<n){
    scanf("%d",&a[i]);
    i++;
  }
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      if(a[j]<a[i])
      {
        tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
      }
    }
  }
  maxrope=a[0];
  for(i=1;i<n;i++)
  {
    maxrope=(maxrope+a[i])/2;
  }
  printf("%d\n",maxrope);
  system("pause");
  return 0;
}