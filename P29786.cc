#include <iostream>
#include <math.h>

using namespace std;

//Pre: Recibe un numero entero.
//Post: Devuelve True si se trata de una potencia de 3 y false en caso de 
//que no lo sea.

bool es_potencia_de_3(int n) {
	//Comprueva si se trata de una potencia de iterando con su divisibilidad
	// y contemplando el caso critico en que n = 0.
	if(n==0) return false;
	else {
		while(n!=1 and n%3==0){
			n = n/3;
		}
		if(n==1) return true;
	}
	return false;
}

int main () {
	int r;
	while(cin >> r){
		if(es_potencia_de_3(r)) cout << "TRUE" << endl;
		else cout << "FALSE" << endl;
	}
}