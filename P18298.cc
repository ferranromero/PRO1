#include <iostream>

using namespace std;

//PRE: Un valor x entre 0 i 9 i els caracters que donene lloc a la 
//representacio dins de la magnitud en la qual estem treballant
//POST: La traduccio corresponent a aquell digit decimal en romanic
//seguint les normes de codificacio

void codificar(int x, char a, char b, char c){
	if(x == 1) cout << a;
	else if(x == 2) cout << a << a;
	else if(x == 3) cout << a << a << a;
	else if(x == 4) cout << a << b;
	else if(x == 5) cout << b;
	else if(x == 6) cout << b << a;
	else if(x == 7) cout << b << a << a;
	else if(x == 8) cout << b << a << a << a;
	else if(x == 9) cout << a << c;
}

int main(){
	int n;
	while(cin >> n){
		cout << n << " = ";
		codificar(n/1000,'M','x','x');
		n = n%1000;
		codificar(n/100,'C','D','M');
		n = n%100;
		codificar(n/10,'X','L','C');
		n = n%10;
		codificar(n,'I','V','X');
		cout << endl;
	}
}
