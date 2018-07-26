#include <iostream>
#include <vector>

using namespace std;

typedef vector < vector<int > > Matriu;

void llegirMatriu(Matriu& m){

	for(int files = 0; files < m.size(); ++files){
		for(int columnes = 0; columnes < m[0].size(); ++columnes){
			cin >> m[files][columnes];
		}
	}
}

bool es_ziga_zaga(const Matriu& m){
	int nColumnes, nFiles;
	nColumnes = m[0].size();
	nFiles = m.size();
	int aux = -999999;
	for(int c = 0; c < nColumnes; ++c){
		//Comprovar les columnes parelles
		if(c%2==0){
			for(int f = 0; f < nFiles; ++f){
				if(aux >= m[f][c]) return false;
				else aux = m[f][c];
			}
		}
		//Comprovare les columnes senars
		else{
			for(int f = nFiles-1; f >= 0; --f){
				if(aux >= m[f][c]) return false;
				else aux = m[f][c];
			}
		}
	}
	return true;
}

int main(){
	int files, columnes;
	int matrixCounter = 0;
	while(cin >> files >> columnes){
		Matriu m(files, vector<int>(columnes));
		llegirMatriu(m);
		++matrixCounter;
		cout << "matriu " << matrixCounter << ": ";
		if(es_ziga_zaga(m)) cout << "si" << endl;
		else cout << "no" << endl;
	}
}