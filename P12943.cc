#include <iostream>

using namespace std;

void mostrar(char c,int rep){
	cout << "majoria de " << c << endl;
	cout << rep << " repeticio(ns)" << endl;
}

int main(){
	int n;
	cin >> n;
	int na, nb, nc;
	na = nb = nc = 0;
	char aux;
	for(int i = 0; i < n; ++i){
		cin >> aux;
		if(aux == 'a') ++na;
		else if (aux == 'b') ++nb;
		else if (aux == 'c') ++nc;
	}
	if(na == nc and na == nb) mostrar('a',na);
	else if(na > nb and na == nc) mostrar('a',na);
	else if(na > nb and na > nc) mostrar('a',na);
	else if(nb >= nc ) mostrar('b',nb);
	else mostrar('c',nc); 
	cout << na << " " << nb << " " << nc << endl;
}
