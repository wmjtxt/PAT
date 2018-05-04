 ///
 /// @file    :patB1018.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:29:44(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>

using namespace std;

int main()
{
    int n;
    char jia, yi;
    int jiawin = 0, jialose = 0, deuce = 0, yiwin = 0, yilose = 0;
    int jiaCwin = 0, jiaBwin = 0, jiaJwin = 0;
    int yiCwin = 0, yiBwin = 0, yiJwin = 0;
    cin >> n;
    while(n--){
        cin >> jia >> yi;
        if(jia == 'C' && yi == 'J'){
            jiawin++;
            yilose++;
            jiaCwin++;
        }
        if(jia == 'J' && yi == 'B'){
            jiawin++;
            yilose++;
            jiaJwin++;
        }
        if(jia == 'B' && yi == 'C'){
            jiawin++;
            yilose++;
            jiaBwin++;
        }
        if(jia == yi) deuce++;
        if(yi == 'C' && jia == 'J'){
            yiwin++;
            jialose++;
            yiCwin++;
        }
        if(yi == 'J' && jia == 'B'){
            yiwin++;
            jialose++;
            yiJwin++;
        }
        if(yi == 'B' && jia == 'C'){
            yiwin++;
            jialose++;
            yiBwin++;
        }
    }
    int tempjia = jiaCwin;
    if(tempjia < jiaBwin) tempjia = jiaBwin;
    if(tempjia < jiaJwin) tempjia = jiaJwin;
    int tempyi = yiCwin;
    if(tempyi < yiBwin) tempyi = yiBwin;
    if(tempyi < yiJwin) tempyi = yiJwin;
    cout << jiawin << " " << deuce << " " << jialose << endl;
    cout << yiwin << " " << deuce << " " << yilose << endl;
    //if(tempjia == 0) cout << "  ";
    if(tempjia == jiaBwin) cout << 'B' << " ";
    else if(tempjia == jiaCwin) cout << 'C' << " ";
    else if(tempjia == jiaJwin) cout << 'J' << " ";
    //if(tempyi == 0) cout << " ";
    if(tempyi == yiBwin) cout << 'B';
    else if(tempyi == yiCwin) cout << 'C';
    else if(tempyi == yiJwin) cout << 'J';
    return 0;
}
