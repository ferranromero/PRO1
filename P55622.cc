#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, aux;
	cin >> n;
	aux = n;
	int ndigits;
	if(n == 0){
		ndigits = 1;
	}
	else{
		ndigits = 0;
	}
	while(n != 0){
		n = n/10;
		++ndigits;
	}
	cout << "El nombre de digits de " << aux << " es " << ndigits << "." << endl;
}