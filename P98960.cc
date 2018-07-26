#include <iostream>
using namespace std;

int main () {
	char c;
	cin >> c;
	if(c >= 'a' and c <= 'z'){
		int temp = c - 32;
		cout << char(temp);
	}
	else{
		int temp = c + 32;
		cout << char(temp);
	}
	cout << endl;
}