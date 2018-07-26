#include <iostream>
using namespace std;

//Pre: Introduir 5 nombres corresponents a anys, dies, hores, minuts i segons.
//Post: Retorna el valor en segons.

int main () {
	int anys, dies, hores, minuts, segons;
	cin >> anys >> dies >> hores >> minuts >> segons;
	dies += anys * 365;
	hores += dies * 24;
	minuts += hores * 60;
	segons += minuts * 60;
	cout << segons << endl;
}