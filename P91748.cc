#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Quadrat;

bool test_columna(const Quadrat& q, int col){
	vector<bool> test(q.size());
	for(int f = 0; f < q.size(); ++f){
		int aux = q[f][col];
		test[aux] = true;
	}
	for(int i = 1; i < test.size(); ++i){
		if(not test[i]) return false;
	}
	return true;
}

bool test_fila(const Quadrat& q, int col){
	vector<bool> test(q.size());
	for(int f = 0; f < q.size(); ++f){
		int aux = q[f][col];
		test[aux] = true;
	}
	for(int i = 1; i < test.size(); ++i){
		if(not test[i]) return false;
	}
	return true;
}

bool es_llati(const Quadrat& q){

}