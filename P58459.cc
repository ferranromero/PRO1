#include <iostream>
#include <math.h>

using namespace std;

bool es_data_valida(int d, int m, int a) {
		if(d<=0 or m<=0 or m > 12 or a<=0) return false;
		else if(m==4 or m ==6 or m== 9 or m==11) return  (d <= 30);
		else if (m==2){
			bool traspas = false;
			if ((a % 4 == 0) and ((a % 100 != 0) or (a % 400 == 0))){
				traspas = true;
			}
			
			if (traspas) return (d <= 29);
			else return (d <=28);
		}
		else return  (d <= 31);
		return false;
}

int main () {
	int x, y, z;
	while(cin >> x >> y >> z) cout << es_data_valida(x,y,z) << endl;
}