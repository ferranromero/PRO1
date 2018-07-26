#include <iostream>
using namespace std;

int main () {
	int hores, minuts, segons;
	cin >> hores >> minuts >> segons;
	//Afegir un segon extra.
	segons += 1;
	//Calcul dels corresponents valors de temps
	if (segons == 60){
		segons = 0;
		minuts += 1;
		if(minuts == 60){
			minuts = 00;
			hores +=1;
			if (hores == 24){
				hores = 0;
			}
		}
	}
	
	//Comprovacio del format de les hores
	if(hores < 10){
		cout << "0" << hores << ":";
	}
	else{
		cout << hores << ":";
	}
	
	//Comprovacio del format dels minuts
	if(minuts < 10){
		cout << "0" << minuts << ":";
	}
	else{
		cout << minuts << ":";
	}
	
	//Comprovacio del format dels segons
	if(segons < 10){
		cout << "0" << segons << endl;
	}
	else{
		cout << segons << endl;
	}
}