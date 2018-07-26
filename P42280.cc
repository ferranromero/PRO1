#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int f, c;
	cin >> f >> c;
	int sumatori = 0;
	for(int fila = 0; fila < f; ++fila){
		for(int col = 0; col < c; ++col){
			char aux;
			cin >> aux;
			int auxint = int(aux) - int('0');
			sumatori += auxint;
			
		}
	}
	cout << sumatori << endl;
}