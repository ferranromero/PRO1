#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	if(a == 0) cout << a;
	else{
		while(a != 0){
			int value = a % 16;
			if (value <= 9) cout << value;
			else if (value == 10) cout << 'A';
			else if (value == 11) cout << 'B';
			else if (value == 12) cout << 'C';
			else if (value == 13) cout << 'D';
			else if (value == 14) cout << 'E';
			else if (value == 15) cout << 'F';
			a /= 16;
		}
	}

	cout << endl;
}