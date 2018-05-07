 ///
 /// @file    :patB1028_改进.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:30:51(NewYork time)
 /// @quote   :
 ///

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


struct people{
    char name[6];
    //char birth[11];
    int year;
    int mon;
    int day;
    int old;
    bool r = true;
}buf[100000], buf2[100000];

bool cmp(people a, people b){
    if(a.year != b.year) return a.year > b.year;
    else if(a.mon != b.mon) return a.mon > b.mon;
    else return a.day > b.day;
}

int main()
{
    int n;
    int i, j, k;
    int oldest = 0, youngest = 200;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%s %4d/%2d/%2d", buf[i].name, &buf[i].year, &buf[i].mon, &buf[i].day);
    }
    j = n;
    k = 0;
    for(i = 0; i < n; i++)
    {
        if(buf[i].year > 2014 || buf[i].year < 1814 || (buf[i].year == 2014 && buf[i].mon > 9) || (buf[i].year == 2014 && buf[i].mon == 9 && buf[i].day > 6) || (buf[i].year == 1814 && buf[i].mon < 9) || (buf[i].year == 1814 && buf[i].mon == 9 && buf[i].day < 6))
        {
            buf[i].r = false;
            j--;
        }else{
            buf2[k] = buf[i];
            k++;
        }
    }
    if(j == 0){
        printf("%d",j);
        return 0;
    }
    else{
        printf("%d",j);
        bool cmp(people a, people b);
        sort(buf2, buf2+j, cmp);
        printf(" %s %s\n", buf2[j-1].name, buf2[0].name);
        return 0;
    }
}
