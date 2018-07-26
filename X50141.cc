#include <iostream>
#include <math.h>

using namespace std;

int max(int a, int b){
	if(a > b) return a;
	return b;
}

int engreixa (int x){
	if(x < 10) return x;
	int gordito = engreixa(x/10);
	int maximo = max(x%10,gordito%10);
	return 10*gordito+maximo;
}

int main () {
	int y;
	while(cin >> y){
		cout << engreixa(y) << endl;;
	}
}