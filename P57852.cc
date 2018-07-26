#include <iostream>
#include <math.h>

using namespace std;

int mcd(int a, int b) {
	//Aplica la iteracion con el algoritmo de Euclides.
	while(a != 0 and b != 0) {
		int aux = a%b;
		a = b;
		b = aux;
	}
	return a+b;
}

int mcd4(int a, int b, int c, int d){
	return mcd(a,mcd(b,mcd(c,d)));
}

int main(){
	int p, q, r, s;
	while(cin >> p >> q >> r >> s) {
		cout << mcd4(p, q, r, s) << endl;
	}
}