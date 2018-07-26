#include <iostream>

using namespace std;

int main(){
	int n, m;
	n = m = 0;
	int nrectangulos = 1;
	while (cin >> n >> m){
		int temporal = 9;
		
		//Controlar espacio entre rectangulos
		if(nrectangulos==1){
			++nrectangulos;
		}
		else{
			cout << endl;
			++nrectangulos;
		}
		for(int fila = 0; fila < n; ++fila){
			for(int col = 0;col < m; ++col){
				cout << temporal;
				--temporal;
				if(temporal < 0){
					temporal = 9;
				}
				
			}
			cout << endl;	
		}
		
		
		
	}
}
