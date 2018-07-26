#include <iostream>
#include <math.h>

using namespace std;

//Pre: Recibe 3 enteros.
//Post: Devuelve la suma del minimo y el maximo de los tres enteros.

int sum_min_max(int x, int y, int z) {
	int max, min;
	max = min = 0;
	
	//Calcula el maximo.
	if(x >= y and x >= z) max = x;
	else if(y >= x and y >= z) max = y;
	else max = z;
	
	//Calcula el minimo.
	if(x <= y and x <= z) min = x;
	else if(y <= x and y <= z) min = y;
	else min = z;
	
	//Devuelve la suma.
	return max+min;
}

int main () {
	cout << sum_min_max(23,22,20) << endl;
}