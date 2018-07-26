#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int files, columnes;
	cin >> files >> columnes;
	for(int i = 0; i < files; ++i){
		for(int z = 0; z < columnes; ++z){
			int aux;
			if(z-i==0){
				cout << 0;
			}
			else if(i > z){
				aux = i - z;
				if(aux > 9){
					cout << aux % 10;
				}
				else{
					cout << aux;
				}
			}
			else if (i < z){
				aux = z - i;
				if(aux > 9){
					cout << aux % 10;
				}
				else{
					cout << aux;
				}
			}
		}
		cout << endl;
	}
}