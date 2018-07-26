#include <iostream>
#include <math.h>

using namespace std;

//Pre: Recibe dos enteros.
//Post: Devuelve el maximo comun divisor entre los dos enteros.

int mcd(int a, int b) {
	//Aplica la iteracion con el algoritmo de Euclides.
	while(a != 0 and b != 0) {
		int aux = a%b;
		a = b;
		b = aux;
	}
	//Devuelve la suma de los valores a y b despues de aplicar el algoritmo
	//de Euclides, como uno vale 0, devuelve el valor del mcd.
	return a+b;
}

int main () {
	int x, z;
	while(cin >> x >> z){
		cout << mcd(x,z) << endl;
	}
}