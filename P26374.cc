#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matriu;

Matriu suma(const Matriu& a, const Matriu& b){
	int columnes, files;
	columnes = files = a.size();

	Matriu resultat(files,vector<int>(columnes));

	for(int f = 0; f < files; ++f){
		for(int c = 0; c < columnes; ++c){
			resultat[f][c] = a[f][c] + b[f][c];
		}
	}
	return resultat;
}

int main(){

}