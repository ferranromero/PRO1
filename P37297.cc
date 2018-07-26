#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int suma = 0;
    for(int i = 0; i < 3; ++i) {
        suma += n % 10;
        n = n/10;
    }
    cout << suma << endl;
    
}