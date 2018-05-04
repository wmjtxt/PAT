 ///
 /// @file    patB1002.cc
 /// @author  wmjtxt(972213032@qq.com)
 /// @date    2018-04-17 03:53:08(NewYork time)
 /// @quote   null
 ///
 
#include <stdio.h>
#include <string.h>
#include <math.h>

const char* Data[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

int main()
{
  char n[100] = {'\0'};
  int i, sum = 0, t = 0;
  int digit = 1;
  while(scanf("%s",n) != EOF){
    for(i = 0; i < strlen(n); i++)
      sum += n[i] - '0';
    while(sum / pow(10, digit) > 1)
      digit++;
    for(i = digit - 1; i > 0; i--){
      t = sum / pow(10,i);
      printf("%s ", Data[t]);
      sum -= t * pow(10, i);
    }
    printf("%s", Data[sum]);
  }
  return 0;
}
