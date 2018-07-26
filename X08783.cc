#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, b;
	n = b = 0;
	while(cin >> b >> n){
		int quocient = b;
		int i = 0;
		if( n >= b) ++i;
		while(quocient >= b){
			quocient = n / b;
			n /= b;
			++i;
		}
		cout << i << endl;
	}
}
