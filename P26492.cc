#include <iostream>
#include <math.h>

using namespace std;

//Pre: Recibe un numero entero n>0.
//Post: Devuelve 1 si la suma de los numeros de posicion par e impar son
//iguales.

bool es_equilibrat(int n) {
	int aux = 1;
	int sumparell, sumsenar;
	sumparell = sumsenar = 0;
	while(n != 0) {
		if(aux%2==0) sumparell += n%10;
		else sumsenar += n%10;
		n = n/10;
		++aux;
	}
	if(sumparell == sumsenar) return true;
	
	return false;
}

int main () {
	int z;
	while(cin >> z) {
		cout << es_equilibrat(z) << endl;
	}
}