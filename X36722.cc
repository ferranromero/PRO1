#include <iostream>
#include <string>

using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	string divisa;
	double x, conv,eur,usd;
	eur = usd = 0;
	cin >> conv;
	while(cin >> x >> divisa){
		if(divisa == "USD"){
			usd += x;
			eur += x/conv;
		}
		else if(divisa == "EUR"){
			usd += x*conv;
			eur += x;
		}
	}
	cout << eur << " " << usd << endl;
}
