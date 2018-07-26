#include <iostream>
#include <math.h>

using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(2);
	int n;
	cin >> n;
	double sumatori1, sumatori2; 
	sumatori1 = sumatori2 = 0;
	for (int i = 0; i < n; ++i){
		double nsub;
		cin >> nsub;
		sumatori1 += pow(nsub,2);
		sumatori2 += nsub;
	}
	sumatori2 *= sumatori2;
	sumatori1 = (1.0 / (n - 1)) * sumatori1;
	sumatori2 = (1.0 / (n * ( n - 1))) * sumatori2;
	
	cout << sumatori1 - sumatori2 << endl;
}
