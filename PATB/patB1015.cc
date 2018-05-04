 ///
 /// @file    :patB1015.cc
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-04-18 03:23:01(NewYork time)
 /// @quote   :
 ///
 
#include <stdio.h>
#include <algorithm>
using namespace std;

struct S{
  int num;
  int dg;
  int cg;
}buf[100000],buf1[100000],buf2[100000],buf3[100000],buf4[100000];

bool cmp(S a, S b){
  if(a.dg+a.cg != b.dg+b.cg) return a.dg+a.cg > b.dg+b.cg;
  else if(a.dg != b.dg) return a.dg > b.dg;
  else if(a.num != b.num) return a.num < b.num;
}

int main()
{
    int N, L, H;
    int i, cnt = 0;
    int i1, i2, i3, i4;
    i1 = i2 = i3 = i4 = 0;
    scanf("%d%d%d",&N,&L,&H);
    int num, dg, cg;
    for(i = 0; i < N; i++){
        scanf("%d%d%d",&buf[i].num,&buf[i].dg,&buf[i].cg);
        if(buf[i].dg >= L && buf[i].cg >= L){
            if(buf[i].dg >= H && buf[i].cg >= H){
                buf1[i1] = buf[i];
                i1++;
            }
            else if(buf[i].dg >= H && buf[i].cg < H){
                buf2[i2] = buf[i];
                i2++;
            }
            else if(buf[i].dg >= buf[i].cg){
                buf3[i3] = buf[i];
                i3++;
            }
            else {
                buf4[i4] = buf[i];
                i4++;
            }
            cnt++;
        }
    }
    //cout << i1 << i2 << i3 << i4 << endl;
    printf("%d\n",cnt);
    sort(buf1, buf1+i1, cmp);
    sort(buf2, buf2+i2, cmp);
    sort(buf3, buf3+i3, cmp);
    sort(buf4, buf4+i4, cmp);
    for(i = 0; i < i1; i++) printf("%d %d %d\n",buf1[i].num,buf1[i].dg,buf1[i].cg);
    for(i = 0; i < i2; i++) printf("%d %d %d\n",buf2[i].num,buf2[i].dg,buf2[i].cg);
    for(i = 0; i < i3; i++) printf("%d %d %d\n",buf3[i].num,buf3[i].dg,buf3[i].cg);
    for(i = 0; i < i4; i++) printf("%d %d %d\n",buf4[i].num,buf4[i].dg,buf4[i].cg);
    return 0;
}
