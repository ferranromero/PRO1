#include <iostream>

using namespace std;

int main() {
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int a, b, c;
	//Calcular A
	if(n1 < n2 and n1 < n3){
		a = n1;
		if(n2 < n3){
			b = n2;
			c = n3;
		}
		else{
			b = n3;
			c = n2;
		}
	}
	else if(n2 < n1 and n2 < n3){
		a = n2;
		if(n1 < n3){
			b = n1;
			c = n3;
		}
		else{
			b = n3;
			c = n1;
		}
	}
	else if(n3 < n1 and n3 < n2){
		a = n3;
		if(n1 < n2){
			b = n1;
			c = n2;
		}
		else{
			b = n2;
			c = n1;
		}
	}
	char x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	if(x1 == 'A'){
		cout << a << ' ';
	}
	else if(x1 == 'B'){
		cout << b << ' ';
	}
	else{
		cout << c << ' ';
	}
	
	if(x2 == 'A'){
		cout << a << ' ';
	}
	else if(x2 == 'B'){
		cout << b << ' ';
	}
	else{
		cout << c << ' ';
	}
	
	if(x3 == 'A'){
		cout << a << endl;
	}
	else if(x3 == 'B'){
		cout << b << endl;
	}
	else{
		cout << c << endl;
	}
}