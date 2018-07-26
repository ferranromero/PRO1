#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int term = n%1000;
    int z, comptador;
    comptador = 0;
    cout << "nombres que acaben igual que " << n << ":" << endl;
    while (cin >> z) {
        if(z%1000 == term){
            cout << z << endl;
            ++comptador;
        }
    }
    cout << "total: " << comptador << endl;
}
                                                                               
