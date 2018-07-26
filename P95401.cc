#include <iostream>
#include <math.h>

using namespace std;

bool es_any_de_traspas(int any) {
	if ((any % 4 == 0) and ((any % 100 != 0) or (any % 400 == 0))) return true;
	return false;
}

int main () {
	int x;
	while(cin >> x){
		cout << es_any_de_traspas(x) << endl;
	}
}