#include <iostream>
#include <math.h>
using namespace std;

// Pre: 0<=d<=9 and 0<=x.
void write_digit(int d,int x) {
    for(int i = 0; i< x; ++i) cout << d;
}

// Pre: 0<n.
void write_expanded(int n) {
	int aux = n;
	int ndigits = 1;
	while((aux /= 10) > 0)++ndigits;
	aux = n;
	for(int i = ndigits-1; i >= 0; --i){
		write_digit(int(aux/pow(10,i)),(int(aux/pow(10,i)))+1);
		aux = aux%int(pow(10,i));
	}
}

int main() {
    int n;
    while (cin >> n) {
        write_expanded(n);
        cout << endl;
    }
}
