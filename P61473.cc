#include <iostream>
#include <vector>

using namespace std;

typedef vector < vector<int> > Matriu;

bool es_simetrica (const Matriu& m){
	int n = m.size();
	for(int fila = 0; fila < n-1; ++fila){
		for(int col = fila+1; col < n; ++col){
			if(m[fila][col] != m[col][fila]) return false;
		}
	}
	return true;
}

int main(){

}