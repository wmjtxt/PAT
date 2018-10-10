 ///
 /// @file    :patB1037 在霍格沃茨找零钱 （20 分）.c
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-10 17:29:53(NewYork time)
 /// @quote   :
 ///
 
#include <stdio.h>

void helper(int pg, int ps, int pk, int ag, int as, int ak){
	int rg,rs,rk;
	if(ak < pk){
		ak = ak + 29;
		as = as - 1;
	}
	rk = ak - pk;
	if(as < ps){
		as = as + 17;
		ag = ag - 1;
	}
	rs = as - ps;
	rg = ag - pg;
	printf("%d.%d.%d\n", rg, rs, rk);
}

int main(){
	int pg,ps,pk,ag,as,ak;
	scanf("%d.%d.%d %d.%d.%d",&pg,&ps,&pk,&ag,&as,&ak);
	if(pg > ag || pg == ag && ps > as || pg == ag && ps == as && pk > ak){
		printf("-");
		helper(ag,as,ak,pg,ps,pk);
	}
	else
		helper(pg,ps,pk,ag,as,ak);
	return 0;
}
