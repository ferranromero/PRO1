#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

int main(){
	int files, columnes;
	cin >> files >> columnes;
	Matrix matriu(files,Row(columnes));
	for(int f = 0; f < files; ++f){
		for (int c = 0; c < columnes; ++c){
			cin >> matriu[f][c];
		}
	}
	string opt;
	while(cin >> opt){
		if(opt == "fila"){
			int fila;
			cin >> fila;
			cout << "fila " << fila << ":";
			for(int i = 0; i < columnes; ++i){
				cout << " " << matriu[fila-1][i];
			}
			cout << endl;
		}
		else if(opt == "columna"){
			int col;
			cin >> col;
			cout << "columna " << col << ":";
			for (int i = 0; i < files; ++i){
				cout << " " << matriu[i][col-1];
			}
			cout << endl;
		}
		else if(opt == "element") {
			int fil, col;
			cin >> fil >> col;
			cout << "element " << fil << " " << col << ": " << matriu[fil-1][col-1] << endl;
		}
	}
}

//4 6 5 7 6 4 1 2 2 8 1 3 8 8 0 1 2 9 2 1 6 5 4 3 2 1