#include <iostream>
#include <math.h>

using namespace std;

struct Punt {
	double x,y;
};

double distancia(const Punt& a, const Punt& b){
	double dist, aux1, aux2;
	aux1 = pow(b.x - a.x,2);
	aux2 = pow(b.y - a.y,2);
	dist = sqrt(aux1+aux2);
	return dist;
}

int main(){
	Punt a;
	Punt b;
	a.x = 2;
	a.y = 3;

	b.x = 3;
	b.y = 4;

	cout << distancia(a,b) << endl;

}