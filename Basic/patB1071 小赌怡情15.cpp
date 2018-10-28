 ///
 /// @file    :patB1071 小赌怡情15.cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-28 15:58:55
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int T, K;
	cin >> T >> K;
	int n1, b, t, n2;
	for(int i = 0; i < K; i++){
		cin >> n1 >> b >> t >> n2;
		if(t > T){
			cout << "Not enough tokens.\tTotal = " << T << ".\n";
			continue;
		}
		if(n1 > n2 && !b || n1 < n2 && b){
			T += t;
			cout << "Win " << t << "!\tTotal = " << T << ".\n";
		}
		else{
			T -= t;
			cout << "Lose " << t << ".\tTotal = " << T << ".\n";
		}
		if(T == 0){
			cout << "Game Over.\n";
			break;
		}
	}
	return 0;
}
