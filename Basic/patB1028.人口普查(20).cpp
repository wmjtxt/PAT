 ///
 /// @file    :patB1028.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:30:51(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


struct people{
    char name[6];
    char birth[11];
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
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> buf[i].name >> buf[i].birth;
    }
    for(i = 0; i < n; i++)
    {
        j = 0;
        while(j < 10)
        {
            while(buf[i].birth[j] != '/')
            {
                buf[i].year = 10*buf[i].year + buf[i].birth[j] - '0';
                j++;
            }
            j++;
            while(buf[i].birth[j] != '/')
            {
                buf[i].mon = 10*buf[i].mon + buf[i].birth[j] - '0';
                j++;
            }
            j++;
            while(buf[i].birth[j] != '\0')
            {
                buf[i].day = 10*buf[i].day + buf[i].birth[j] - '0';
                j++;
            }
        }
    }
    j = n;
    k = 0;
    for(i = 0; i < n; i++)
    {
        if(buf[i].year > 2014 || buf[i].year < 1814)
        {
            buf[i].r = false;
            j--;
        }
        else if(buf[i].year == 2014 && buf[i].mon > 9)
        {
            buf[i].r = false;
            j--;
        }
        else if(buf[i].year == 2014 && buf[i].mon == 9 && buf[i].day > 6)
        {
            buf[i].r = false;
            j--;
        }
        else if(buf[i].year == 1814 && buf[i].mon < 9)
        {
            buf[i].r = false;
            j--;
        }
        else if(buf[i].year == 1814 && buf[i].mon == 9 && buf[i].day < 6)
        {
            buf[i].r = false;
            j--;
        }
        else{
            buf2[k] = buf[i];
            k++;
        }
    }
    /*for(i = 0; i < n; i++)
        if(buf[i].r)
            cout << buf[i].name << " " << buf[i].year << "/" << buf[i].mon << "/" << buf[i].day << endl;*/
    if(j == 0){
        cout << j;
        return 0;
    }
    else{
        cout << j;
        //for(i = 0; i < n; i++) buf2[i].old = 2014 - buf2[i].year;
        //for(i = 0; i < n; i++) cout << buf[i].old << " ";
        //cout << endl;
        /*j = 0, k = 0;
        for(i = 0; i < n; i++)
        {
            if(buf[i].old <= 200 && buf[i].old >= 0 && buf[i].r)
                if(oldest <= buf[i].old)
                {
                    oldest = buf[i].old;
                    j = i;
                }
        }
        for(i = 0; i < n; i++)
        {
            if(buf[i].old <= 200 && buf[i].old >= 0 && buf[i].r)
                if(youngest >= buf[i].old)
                {
                    youngest = buf[i].old;
                    k = i;
                }
        }*/
        bool cmp(people a, people b);
        sort(buf2, buf2+j, cmp);
        cout << " " << buf2[j-1].name << " " << buf2[0].name << endl;
        /*for(i = 0; i < j; i++)
            if(buf2[i].r)
                cout << buf2[i].name << " " << buf2[i].year << "/" << buf2[i].mon << "/" << buf2[i].day << endl;*/
        //cout << buf[j].old << " " << buf[k].old;
        system("pause");
        return 0;
    }
}