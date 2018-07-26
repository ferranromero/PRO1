#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > Matriu;

void swap(int& a, int& b){
	int aux = a;
	a = b;
	b = aux;
}

void intercanvia(Matriu& mat, int j, int k){
	for(int f = 0; f < mat.size(); ++f){
		int aux = mat[f][j];
		mat[f][j] = mat[f][k];
		mat[f][k] = aux;
		//swap(mat[f][j],mat[f][k]);
	}
}

void imprimir_vector(Matriu& mat){
	for(int f = 0; f < mat.size(); ++f){
		for(int c = 0; c < mat[0].size(); ++c){
			if(c != 0) cout << " " << mat[f][c];
			else cout << mat[f][c];
		}
		cout << endl;
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	Matriu matrix(n, vector<int> (m));
	
	for(int f = 0; f < n; ++f){
		for(int c = 0; c < m; ++c) cin >> matrix[f][c];
	}
	
	cout << "-----" << endl;
	imprimir_vector(matrix);
	cout << "-----" << endl;

	int j, k;
	Matriu aux = matrix;
	while(cin >> j >> k){
		intercanvia(aux, j, k);
		imprimir_vector(aux);
		cout << "-----" << endl;
	}
}