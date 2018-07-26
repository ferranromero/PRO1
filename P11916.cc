#include <iostream>

using namespace std;
int main(){
	cout.setf(ios::fixed);
	cout.precision(10);	
	int n;
	while(cin >> n){
		long int fact = 1;
		long double e = 0;
		for(int i = 1; i <= n;++i){
			e += (1.0)/fact;
			fact *= i;
		}
		cout << "Amb "<< n << " terme(s) s'obte " << e << "." << endl;
	}
}
