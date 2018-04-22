 ///
 /// @file    :patB1014.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:22:38(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#include <string.h>
using namespace std;

void day(char da){
  switch(da){
    case 'A' : cout << "MON";
    break;
    case 'B' : cout << "TUE";
    break;
    case 'C' : cout << "WED";
    break;
    case 'D' : cout << "THU";
    break;
    case 'E' : cout << "FRI";
    break;
    case 'F' : cout << "SAT";
    break;
    case 'G' : cout << "SUN";
    break;
  }
}

void hour(char h){
  switch(h){
    case '0' : cout << "00";
    break;
    case '1' : cout << "01";
    break;
    case '2' : cout << "02";
    break;
    case '3' : cout << "03";
    break;
    case '4' : cout << "04";
    break;
    case '5' : cout << "05";
    break;
    case '6' : cout << "06";
    break;
    case '7' : cout << "07";
    break;
    case '8' : cout << "08";
    break;
    case '9' : cout << "09";
    break;
    case 'A' : cout << 10;
    break;
    case 'B' : cout << 11;
    break;
    case 'C' : cout << 12;
    break;
    case 'D' : cout << 13;
    break;
    case 'E' : cout << 14;
    break;
    case 'F' : cout << 15;
    break;
    case 'G' : cout << 16;
    break;
    case 'H' : cout << 17;
    break;
    case 'I' : cout << 18;
    break;
    case 'J' : cout << 19;
    break;
    case 'K' : cout << 20;
    break;
    case 'L' : cout << 21;
    break;
    case 'M' : cout << 22;
    break;
    case 'N' : cout << 23;
    break;
  }
}

int main()
{
    char a[60], b[60], c[60], d[60];
    int i = 0, j = 0;
    int flag = 0;
    while(cin >> a >> b >> c >> d){
      int alen = strlen(a);
      int blen = strlen(b);
      int clen = strlen(c);
      int dlen = strlen(d);
      //cout << a;
      while(i < alen && i < blen){
        if(a[i] == b[i] && flag ==0){
          if(a[i] >= 65 && a[i] <= 71){
            day(a[i]);
            flag = 1;
            cout << " ";
          }
          i++;
          continue;
        }
        if(a[i] == b[i] && flag == 1){
          //cout <<a[i];
          if(a[i] >= 48 && a[i] <= 57){
            hour(a[i]);
            cout << ":";
            break;
          }
          if(a[i] >= 65 && a[i] <= 78){
            hour(a[i]);
            cout << ":";
            break;
          }
        }
        i++;
      }
      while(j < clen && j < dlen){
        if(c[j] == d[j]){
          if(c[j] >= 65 && c[j] <= 90){
              if(j < 10)cout << "0" << j;
              else cout << j;
              break;
          }
          if(c[j] >= 97 && c[j] <= 122){
              if(j < 10)cout << "0" << j;
              else cout << j;
              break;
          }
        }
        j++;
      }
    }
    return 0;
}