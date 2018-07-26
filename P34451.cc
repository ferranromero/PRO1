#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, x;
	cin >> n;
	int aux = 0;
	while(cin >> x){
		if(x % n == 0){
			++aux;
		}
	}
	cout << aux << endl;
}