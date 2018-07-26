#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int a, b, sumatori=0;
	while( cin >> a >> b){
		sumatori = 0;
		for(int i = a;i <= b;i++){
			int temp = pow (i , 3);
			sumatori += temp;
		}
		cout << "suma dels cubs entre " << a << " i " << b << ": " << sumatori << endl;
	}
	
}