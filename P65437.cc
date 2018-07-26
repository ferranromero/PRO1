#include <iostream>
#include <math.h>

using namespace std;

void swap2(int& a, int& b){
	int aux;
	aux = b;
	b = a;
	a = aux;
}

int main(){
	int a, b;
	cin >> a >> b;
	swap2(a,b);
}