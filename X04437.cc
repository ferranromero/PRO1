#include <iostream>
#include <math.h>

using namespace std;

double dist_or(double x, double y){
	double dist;
	dist = sqrt(pow(x,2)+pow(y,2));
	return dist;
}

int main(){
	double a, b;
	cin >> a >> b;
	cout << dist_or(a,b) << endl;
}