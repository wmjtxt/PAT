 ///
 /// @file    :patB1058 选择题20.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-21 13:34:23
 /// @quote   :
 ///

//写的有点不伦不类，典型的write c++ in c
//有struct printf vector set ....
//之所以用set，是因为有的学生的选项都正确，
//但和正确答案的顺序不一样，
//比如答案是a c,学生的结果是c a
//我一开始用char*，最后一个测试点过不了,改成set就过了
#include <iostream>
#include <vector>
#include <set>
#include <string.h>
using namespace std;

struct P{
	int score;
	int cntOpt;
	int cntTrue;
	char* option;
	set<char> option;
};

struct A{
	int cnt;
	set<char> ans;
};

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	P p[m];
	char c;
	for(int i = 0; i < m; i++){
		scanf("%d %d %d", &(p[i].score), &(p[i].cntOpt), &(p[i].cntTrue));
		for(int j = 0; j < p[i].cntTrue; j++){
			scanf(" %c",&c);
			p[i].option.insert(c);
		}
	}
	vector<vector<A>> a(n,vector<A>(m));
	vector<int> w(m,0);//wrongCnt
	vector<int> s(n);
	int max = 0;//maxWrongCnt
	for(int i = 0; i < n; i++){
		scanf("\n");
		for(int j = 0; j < m; j++){
			if(j != 0)
				scanf(" ");
			scanf("(%d", &a[i][j].cnt);
			for(int k = 0; k < a[i][j].cnt; k++){
				scanf(" %c", &c);
				a[i][j].ans.insert(c);
			}
			scanf(")");
			if(a[i][j].ans == p[j].option)
				s[i] += p[j].score;
			else
				w[j]++;
		}
	}
	for(auto item : s)
		cout << item << endl;
	for(int i = 0; i < m; i++){
		if(w[i] > max)
			max = w[i];
	}
	if(max == 0)
		printf("Too simple");
	else{
		printf("%d", max);
		for(int i = 0; i < m; i++){
			if(w[i] == max){
				printf(" %d",i+1);
			}
		}
	}
	return 0;
}
