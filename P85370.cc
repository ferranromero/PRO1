#include <iostream>
using namespace std;
int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	double capital, interes, total;
	int temps;
	string tipus;
	cin >> capital >> interes >> temps >> tipus;
	if(tipus == "simple"){
		total = capital + (capital * (interes/100) * temps);
	}
	else{
		for(int i=1; i<= temps; i++){
			if(i==1){
				total = capital*(1+(interes/100));
			}
			else{
 				total = total*(1+(interes/100));
			}
		}
	}
	cout << total << endl;
}