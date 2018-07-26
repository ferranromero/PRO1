#include <iostream>
using namespace std;
int main() {
	//Pre: Entrar un interes seguit de la paraula que indiqui els terminis.
	//Post: TAE amb 4 decimals.
	
	//Establir precisio decimal
	cout.setf(ios::fixed);
 	cout.precision(4);
	
	//Declaracio variables
	double interes, tae, fraccions;
	string tipus;
	cin >> interes >> tipus;
	interes = interes / 100;
	
	//Assignacio quantitat de terminis
	if (tipus == "setmanal") fraccions = 52;
	else if(tipus == "mensual") fraccions = 12;
	else if (tipus == "trimestral") fraccions = 4;
	else if (tipus == "semestral") fraccions = 2;
	tae=1;
	for(int i=0;i<fraccions;i++){
		tae*=(1 + interes / fraccions);
	}
	cout << (tae-1)*100 << endl;
	
}