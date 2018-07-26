#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int k, n, m;
	cin >> k >> n >> m;
	for(int i = 0; i<k; ++i) {
		if(i!=0) cout << endl;
		int printar = 9;
		for(int fila = 0; fila < n; ++fila){
			for(int col = 0; col < m; ++col){
				if(printar==0){
					cout << printar;
					printar = 10;
				}
				else{
					cout << printar;
				}
				--printar;
			}
			cout << endl;
		}
	}
}