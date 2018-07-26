#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > Matriu;

int suma_diagonals(const Matriu& mat){
	int f = mat.size();
	int c = mat[0].size();
	int suma = 0;
	if(f == 1 and c == 1){
		return mat[0][0];
	}
	else{
		for(int i = 0; i < c; ++i){
			suma += mat[i][i];
		}
		for(int i = 0; i < f; ++i){
			suma += mat[i][c-1-i];
		}
		if(c%2!=0){
			suma -= mat[c/2][f/2];
		}
		return suma;
	}
}


int main(){
	int n;
	while(cin >> n){
		Matriu matrix(n,vector<int> (n));

		//Llegir matriu
		for(int f = 0; f < matrix.size(); ++f){
			for(int c = 0; c < matrix[0].size(); ++c) cin >> matrix[f][c];
		}
		
		//Mostrar el resultat
		cout << suma_diagonals(matrix) << endl;
	}
}