#include <iostream>

using namespace std;

void convergeix(int n, int& k, int& lluny){
	if (n == 1) k = lluny = n;
	while(n!= 1){
		if(n > lluny) lluny = n;
		if(n%2==0) n = n/2;
		else n = (n*3)+1;
		++k;
	}
}

int main(){
	int m, p,pasos, dist;
	int max = 0;
	cin >> m >> p;
	for(int i = 1; i <= m; ++i){
		pasos = 1;
		dist = 0;
		convergeix(i,pasos,dist);
		if(pasos > p) cout << i << endl;
		if(dist > max) max = dist;
	}
	cout << "S'arriba a " <<max << "." << endl;
}
