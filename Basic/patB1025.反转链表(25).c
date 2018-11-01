 ///
 /// @file    :patB1025.c
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:30:32(NewYork time)
 /// @quote   :
 ///
 
#include <stdio.h>

int node[100000][3];
int list1[100000];

int main()
{
  int n, k, first;
  while(scanf("%d%d%d", &first, &n, &k) != EOF)
  {
    for(int i = 0; i < n; i++)
    {
      int addr, data, next;
      scanf("%d%d%d", &addr, &data, &next);
      node[addr][0] = data, node[addr][1] = next;
    }
    list1[0] = first;
    int last = first;
    int cnt = 1;
    for(int i = 1; i < n; i++)
    {
      node[last][2] = last;
      last = list1[i] = node[last][1];
      cnt++;
      if(node[last][1] == -1)
        break;
    }
    int s,e;
    s = 0;
    e = s + k;
    while(e <= cnt && e > s)
    {
      for(int j = e-1; j >= s; j--)
      {
        if(j == k-1)
          printf("%05d %d ", list1[j], node[list1[j]][0]);
        else printf("%05d\n%05d %d ", list1[j], list1[j], node[list1[j]][0]);
      }
      s = e;
      e = s+k;
    }
    for(int j = s; j < cnt; j++)
    {
      if(j == 0)
        printf("%05d %d ", list1[j], node[list1[j]][0]);
      else
        printf("%05d\n%05d %d ", list1[j], list1[j], node[list1[j]][0]);
    }
    printf("-1\n");
  }
  return 0;
}
