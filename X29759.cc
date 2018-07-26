#include <iostream>
#include <math.h>

using namespace std;
bool esBlanco(int fila, int col){
	int temp = fila + col;
	if(temp % 2 == 0){
		return true;
	}
	else{
		return false;
	}
}

int main() {
	int n, blanco, negro;
	blanco = negro = 0;
	cin >> n;
	for (int fila = 0; fila < n; ++fila){
		for(int col = 0; col < n; ++col){
			char x;
			cin >> x;
			int X = int(x) - int('0');
			if(esBlanco(fila,col)){
				blanco += X;
			}
			else{
				negro += X;
			}
		}
	}
	cout << blanco << "-" << negro << " = " << blanco - negro << endl;
}