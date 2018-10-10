 ///
 /// @file    :patB1036.跟奥巴马一起编程(15).cpp
 /// @author  :wmjtxt(972213032@qq.com)
 /// @date    :2018-10-10 17:00:32(NewYork time)
 /// @quote   :
 ///
 
#include <iostream>
using namespace std;

int main(){
	int N;
	char C;
	while(cin >> N >> C){
		if(N < 3)
			continue;
		int row = (N+1)/2;
		int i = 0;
		while(i < row){
			if(i == 0 || i == row-1){
				for(int j = 0; j < N; j++){
					cout << C;
				}
				cout << endl;
			}
			else{
				cout << C;
				for(int j = 0; j < N-2; j++){
					cout << " ";
				}
				cout << C << endl;
			}
			i++;
		}
	}
	return 0;
}
