#include <iostream>
using namespace std;
int main () {
	int a, b, c, d, inf, sup;
	cin >> a >> b >> c >> d;
	if (b < c or d < a){
		cout << "[]" << endl;
	}
	else{
		inf = a;
		if (c > a){
			inf = c;
		}
		sup = b;
		if (d < b){
			sup = d;
		}
		cout << '['<< inf << ','<< sup << ']' << endl;
	}
}