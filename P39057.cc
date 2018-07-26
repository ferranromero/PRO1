#include <iostream>
#include <math.h>

using namespace std;

int main () {
	cout.setf(ios::fixed);
	cout.precision(6);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		string tipus;
		cin >> tipus;
		if(tipus == "rectangle"){
			double a, b;
			cin >> a >> b;
			cout << a*b << endl;
		}
		else if(tipus == "cercle"){
			double r;
			cin >> r;
			cout << M_PI * pow(r,2) << endl;
		} 
	}
}