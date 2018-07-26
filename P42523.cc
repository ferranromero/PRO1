#include <iostream>

using namespace std;

int mcd(int a, int b) {
	if (b != 0) return mcd(b, a%b);
	else return a;         
}

//Pre: Recibe por entrada dos enteros.
//Post: Devuelve como salida el maximo comun divisor entre los dos enteros.

int main () {
	int x, y;
	while(cin >> x >> y){
		cout << mcd(x,y) << endl;
	}
}