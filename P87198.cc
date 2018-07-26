#include <iostream>
#include <math.h>

using namespace std;

//Pre: Introducir por teclado un numero entero que corresponde al tamaño de las 
//caras del octagono. Este numero sera leido tantas veces como se quiera.

//Post: Muestra por pantalla el dibujo del octagono donde cada lado del octagono
// (c) tiene como tamaño "n".

int main() {
	int n;
	while(cin >> n){
		int printar = n;
		int white = n-1;
		//Dibujar primera mitad
		for(int i = 1; i <= n; ++i){
			for(int w = 0; w < white; ++w){
				cout << " ";
			}
			for(int x = 0; x < printar; ++x){
				cout << "X";
			}
			--white;
			printar += 2;
			cout << endl;
		}
		
		//Dibujar intermedio
		for(int i = 0; i < (n-2); ++i){
			for(int x = 0; x < printar-2; ++x){
				cout << "X";
			}
			cout << endl;
		}
		//Dibujar segunda mitad
		printar -= 2;
		white = 0;
		for(int i = 1; i <= n; ++i){
			for(int w = 0; w < white; ++w){
				cout << " ";
			}
			for(int x = 0; x < printar; ++x){
				cout << "X";
			}
			++white;
			printar -= 2;
			cout << endl;
		}
		cout << endl;
	}
	
	
}