#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n, ndigits,temporal, sumaa, sumab;
	sumaa = sumab = 0;
	cin >> n;
	ndigits = 0;
	temporal = n;
	while(temporal !=0){
		temporal=temporal/10;
		++ndigits;
	}
	if(ndigits % 2 == 0 and ndigits != 0){
		temporal = n;
		for(int i = 0; i< ndigits; ++i){
			if(i >= (ndigits/2)){
				sumaa += temporal%10;
				temporal = temporal / 10;
			}
			else{
				sumab += temporal%10;
				temporal = temporal / 10;
			}
		}
		if(sumaa < sumab){
			cout << sumaa << " < " << sumab << endl;
		}
		else if(sumaa > sumab){
			cout << sumaa << " > " << sumab << endl;
		}
		else if (sumaa == sumab){
			cout << sumaa << " = " << sumab << endl;
		}
	}
	else{
		cout << "res" << endl;
	}

}
