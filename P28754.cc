#include <iostream>

using namespace std;

int main(){
  int numero, dividendo, resto, divisor = 2;
  cin >> numero;
  dividendo = numero;
  while(dividendo >= divisor){
    resto = dividendo % 2;
    cout << resto;
    dividendo = dividendo/divisor;
  }
  cout << dividendo%2 << endl;
}