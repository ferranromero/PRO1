#include <iostream>
#include <vector>

using namespace std;

typedef vector < vector<int> >	Matriu;

Matriu producte(const Matriu& a, const Matriu& b){
	int n = b.size();
	Matriu resultat(n,vector<int>(n));
	for(int fila = 0; fila < n; ++fila){
		for(int columna = 0; columna < n; ++columna){
			//Calcul matriu producte;
			int resultatElement = 0;
			for(int i = 0; i < n; ++i){
				resultatElement += a[fila][i] * b[i][columna] ;
			}
			resultat[fila][columna] = resultatElement;
		}
	}
	return resultat;
}

int main(){
	Matriu a(3, vector<int> (3));
	Matriu b(3, vector<int> (3));
	Matriu c(3, vector<int> (3));
	for(int i = 0; i < a.size(); ++i){
		for(int x = 0; x < a.size();++x){
			cin >> a[i][x];
		}
	}
	for(int i = 0; i < b.size(); ++i){
		for(int x = 0; x < b.size();++x){
			cin >> b[i][x];
		}
	}
	c = producte(a,b);
	for(int i = 0; i < c.size(); ++i){
		for(int x = 0; x < c.size(); ++x){
			if(x > 0) cout << " " << c[i][x];
			else cout << c[i][x];			
		}
		cout << endl;
	}
}