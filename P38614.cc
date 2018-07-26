#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, aux;
	cin >> n;
	aux = n;
	int ndigits = 0;
	while (n != 0){
		n = n / 10;
		++ ndigits;
	}
	n = aux;
	int comptador = 1;
	int sumatori = 0;
	while (n != 0){
		if(comptador % 2 == 0){
			
		}
		else{
			sumatori += n % 10;
		}
		n = n / 10;
		--comptador;
	}
	if(sumatori % 2 == 0){
		cout << aux << " ES TXATXI" << endl; 
	}
	else{
		cout << aux << " NO ES TXATXI" << endl;
	}	
}