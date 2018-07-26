#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Punt{
	int x,y;
};

struct Ubicacio{
	Punt loc;
	int dist;
};

int calculaDistancia(Punt& origen, Punt& desti){
	int dist = 0;
	if(origen.x < desti.x) dist += desti.x - origen.x;
	else dist += origen.x - desti.x;
	if(origen.y < desti.y) dist += desti.y - origen.y;
	else dist += origen.y - desti.y;
	return dist;
}
bool comp(const Ubicacio& a, const Ubicacio& b){
	int d1 = a.dist;
	int d2 = b.dist;
	if(d1 != d2) return d1 < d2;
	if(a.loc.x != b.loc.x) return a.loc.x < b.loc.x;
	return a.loc.y < b.loc.y;
}

int main (){
	//llegir origen
	Punt origen;
	cin >> origen.x >> origen.y;
	int n;
	cin >> n;
	vector<Ubicacio> llista(n);
	for(int i = 0; i < n; ++i){
		Ubicacio desti;
		cin >> desti.loc.x;
		cin >> desti.loc.y;
		desti.dist = calculaDistancia(origen, desti.loc);
		llista[i]=desti;
	}
	sort(llista.begin(),llista.end(), comp);

	//Dar formato a la salida.
	int distanciaMostrar = -20;
	for(int i = 0; i < n; ++i){
		int currDistance = llista[i].dist;
		if(currDistance > distanciaMostrar){
			cout << "punts a distancia " << currDistance << endl;
			distanciaMostrar = currDistance;
		}
		cout <<  llista[i].loc.x << " " << llista[i].loc.y << endl;
	}
}