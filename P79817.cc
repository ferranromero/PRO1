#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	for(int i = 1; i < b; ++i){
		if(b == 0){
			a = 1;
		}
		else{
			a *= a;
		}
		
	}
	cout << a << endl;
}