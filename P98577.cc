#include <iostream>
using namespace std;

int main(){
	int hores, minuts, inc, found;
	while(cin >> hores >> minuts >> inc){
		found = 0;
		//found = int(inc/1440)*24;
		//inc = inc % 1440;
		//cout << "FOUND: " << found << " INC: " << inc << endl;
		while(inc != 0){
			if((hores%12)*5 == minuts){
				if(inc > 0){
					++found;
					cout << hores << "::::" << minuts << endl;
				}
			}
			++minuts;
			--inc;
			if(minuts == 60){
				if(hores == 23)	hores = 0;
				else ++hores;
				minuts = 0;
				
			}
			cout << hores << ":" << minuts << endl;
		}
		cout << found << endl;	
	}
}
