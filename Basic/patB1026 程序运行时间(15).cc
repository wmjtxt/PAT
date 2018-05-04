 ///
 /// @file    :patB1026.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:30:39(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
#define CLK_TCK 100
using namespace std;

int main()
{
    int c1, c2;
    cin >> c1 >> c2;
    int h, m, s;
    float c = (float)(c2 - c1)/CLK_TCK;
    float cc = c - (int)c;
    int ccc;
    if(cc >= 0.5) ccc = (int)c + 1;
    else ccc = (int)c;
    h = ccc/3600;
    m = (ccc - h*3600)/60;
    s = ccc%60;
    //cout << cc << "/" << ccc << "/";
    if(h < 10) cout << 0 << h << ":";
    else cout << h << ":";
    if(m < 10) cout << 0 << m << ":";
    else cout << m << ":";
    if(s < 10) cout << 0 << s << endl;
    else cout << s << endl;
    //最笨的方法
    //cout << h << ":" << m << ":" << s << endl;
    return 0;
}