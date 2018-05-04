 ///
 /// @file    :patB1035.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:31:38(NewYork time)
 /// @quote   :
 ///
 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int a, int b) {
    return a < b;
}

int main()
{
  int n,i,j,k,pos1,pos2;
  int s1,s2,t,mid;
  scanf("%d",&n);
  int *a=(int*)malloc(sizeof(int)*n);
  int *b=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }
  
  for(i=0;i<n-1;i++)
  {
    if(b[i]>b[i+1])
    {
      break;
    }
  }
  pos1=pos2=i+1;
  for(j=i+1;j<n;j++)
  {
    if(a[j]!=b[j])
    {
      break;
    }
  }
  
  if(j==n)
  {
    printf("Insertion Sort\n");
    /*if(pos1>=n)
    {
      for(i=0;i<n-1;i++)
      {
        printf("%d ",b[i]);
      }
      printf("%d\n",b[n-1]);
      system("pause");
      return 0;
    }*/
    for(i=0;i<n;i++)
    {
      if(b[i]<=b[pos1])
      {
        printf("%d ",b[i]);
      }else{
        printf("%d",b[pos1]);
        break;
      }
    }
    if(i==n-1)
    {
      printf("\n");
      return 0;
    }
    for(k=i;k<n;k++)
    {
      if(k!=pos1){
        printf(" %d",b[k]);
      }
    }
    printf("\n");
  }else{
    printf("Merge Sort\n");
    int k = 1;
        int flag = 1;
        while(flag) {
            flag = 0;
            for (i = 0; i < n; i++) {
                if (a[i] != b[i])
                    flag = 1;
            }
            k = k * 2;
            for (i = 0; i < n / k; i++)
                sort(a + i * k, a + (i + 1) * k, cmp);
            sort(a + n / k * k, a + n, cmp);
        }
    for (j = 0; j < n - 1; j++) {
      printf("%d ", a[j]);
    }
    printf("%d", a[n - 1]);
    }
    
    free(a);
    free(b);
  return 0;
}