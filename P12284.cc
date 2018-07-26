#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Paraula{
	string paraula;
	int aparicions;
};

void colocarParaula(vector<Paraula> v&, string p){
	int i = 0;
	bool colocat = false;
	while(i < v.size() and not colocat){
		if(v[i].paraula == p) v[i].aparicions += 1;
	}
}

int main(){
	int n, k;
	cin >> n >> k;
	vector<Paraula> list(n);
	string aux;
	for(int i = 0; i < n; ++i){
		cin >> aux;
		colocarParaula(list,aux);
	}
	for(int i = 0; i < k; ++i){
		cout << list[i].paraula << endl;
	}
}
