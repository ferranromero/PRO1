#include <iostream>
using namespace std;

int mcd(int num1, int num2){
	int mcd = 0;
	int a = std::max(num1,num2);
	int b = std::min(num1,num2);
	do{
		mcd = b;
		b = a%b;
		a = mcd;
	}while(b!=0);
	return mcd;
}

int mcm(int num1, int num2){
	int mcm = 0;
	int a = std::max(num1,num2);
	int b = std::min(num1,num2);
	mcm = (a/mcd(a,b))*b;
	return mcm;
}

int main(){
	int n, result,aux;
	while(cin >> n and n != 0){
		result = 1;
		for(int i = 0; i < n; ++i){
			cin >> aux;
			result = mcm(result,aux);
		}
		cout << result << endl;
	}
}
