#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<bool> garbell(int n) {
    vector<bool> aux(n+1, true);
    for (int i = 2; i <= n; ++i) {
        for (int j = 2*i; j <= n; j += i) {
            aux[j] = false;
        }              
    }
    return aux;
}

int main() {
    int n;
    vector<bool> auxiliar;
    auxiliar = garbell(1000000);
    while (cin >> n) {
        if (n == 0 || n == 1) cout << n << " no es primer" << endl;
        else {
        	if (auxiliar[n]) cout << n << " es primer" << endl;
            else cout << n << " no es primer" << endl;
        }
    }
}