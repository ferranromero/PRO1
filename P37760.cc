#include <iostream>
#include <math.h>

using namespace std;
double calcularSinus (double ang) {
    double rad = ang*M_PI/180;
    return sin(rad);
}
double calcularCosinus (double ang) {
    double rad = ang*M_PI/180;
    return cos(rad);
}

int main(){
    cout.setf(ios::fixed); 
    cout.precision(6);
	double n;
	while(cin >> n){
        cout << calcularSinus(n) << " " << calcularCosinus(n) << endl;
    }
}
