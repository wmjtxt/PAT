 ///
 /// @file    :patB1014.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:22:38(NewYork time)
 /// @quote   :liuchuo(柳婼)
 ///
 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string weekday[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    string a, b, c, d;
    int i = 0, j = 0;
    int flag = 0;
    char day, hour;
    int min = 0;
    while(cin >> a >> b >> c >> d){
      int alen = a.length();
      int blen = b.length();
      int clen = c.length();
      int dlen = d.length();
      //cout << a;
      while(i < alen && i < blen){
        if(flag == 0 && a[i] == b[i] && a[i] >= 'A' && a[i] <= 'G'){
            day = a[i];
            flag = 1;
          i++;
          continue;
        }
        if(flag == 1 && a[i] == b[i] && (isdigit(a[i]) || (a[i] >= 'A' && a[i] <= 'N'))){
            hour = a[i];
            break;
        }
        i++;
      }
      while(j < clen && j < dlen){
        if(c[j] == d[j] && isalpha(c[j])){
            min = j;
            break;
        }
        j++;
      }
      int m = isdigit(hour) ? hour - '0' : hour - 'A' + 10;
      cout << weekday[day - 'A'];
      printf(" %02d:%02d", m, min);
    }
    return 0;
}
