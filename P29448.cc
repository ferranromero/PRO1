#include <iostream>
#include <math.h>

using namespace std;

int main () {
	int d, m, a;
	while(cin >> d >> m >> a){
		bool correcte = false;
		if(d<=0 or m<=0 or m > 12 or a<=0) correcte = false;
		else if(m==4 or m ==6 or m== 9 or m==11) correcte = (d <= 30);
		else if (m==2){
			bool traspas = false;
			if ((a % 4 == 0) and ((a % 100 != 0) or (a % 400 == 0))){
				traspas = true;
			}
			
			if (traspas) correcte = (d <= 29);
			else correcte = (d <=28);
		}
		else correcte = (d <= 31);
		if(correcte) cout << "Data Correcta" << endl;
		else cout << "Data Incorrecta" << endl;
		
	}
}