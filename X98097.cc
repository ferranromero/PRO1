#include <iostream>
#include <math.h>

using namespace std;

bool esParell(int x){
	if(x % 2 == 0){
		return true;
	}
	else{
		return false;
	}
}

int main() {
	int n, nparell, nsenar;
	cin >> n;
	nparell = nsenar = 0;
	int temporal = n;
	int posicio = 1;
	while (temporal != 0){
		if(esParell(posicio)){
			nparell += temporal % 10;
			temporal = temporal / 10;
		}
		else{
			nsenar += temporal % 10;
			temporal = temporal / 10;
		}
		++posicio;	
	}
	cout << nsenar << " " << nparell << endl;
	if(nparell % nsenar == 0){
		
	}
	else{
		cout << "res" << endl;
	}
	
}