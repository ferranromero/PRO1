#include <iostream>
#include <math.h>

using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	double x;
	cin >> x;
	double z, resultat;
	int exp = 0;
	while (cin >> z){
		if(exp == 0){
			resultat += z;
		}
		else{
			resultat += z * pow(x,exp);
		}
		++exp;
	}
	cout << resultat << endl;
}