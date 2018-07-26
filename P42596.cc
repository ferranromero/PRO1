#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > Matriu;

void min_max(const Matriu& mat, int& minim, int& maxim){
	minim = mat[0][0];
	maxim = mat[0][0];
	for(int f = 0; f < mat.size(); ++f){
		for(int c = 0; c < mat[0].size(); ++c){
			if(minim > mat[f][c]) minim = mat[f][c];
			if(maxim < mat[f][c]) maxim = mat[f][c];
		}
	}
}

int valor_absolut(int n){
	if(n < 0) return n*-1;
	else return n;
}

int main(){
	int n, m, min, max, diferencia, posicio;
	posicio = 1;
	int count = 0;

	while(cin >> n >> m){
		Matriu matrix(n,vector<int> (m));
		++count;
		for(int f = 0; f < matrix.size(); ++f){
			for(int c = 0; c < matrix[0].size(); ++c) cin >> matrix[f][c];
		}
		min_max(matrix, min, max);
		int currDif = max - min;
		currDif = valor_absolut(currDif);

		if(currDif > diferencia){
			diferencia = currDif;
			posicio = count;
		}
	}

	cout << "la diferencia maxima es " << diferencia << endl;
	cout << "la primera matriu amb aquesta diferencia es la " << posicio << endl;
}