#include <iostream>
using namespace std;
int main () {
	int a, b, mcd;
	cin >> a >> b;
	cout << "El mcd de " << a << " i " << b << " es ";
	while(a != b){
	  if (a > b){
	    a = a - b;
	  }
	  else{
	    b = b - a;
	  }
	}
	mcd = a;
	cout << mcd << "." << endl;
}