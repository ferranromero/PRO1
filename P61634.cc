#include <iostream>
using namespace std;

int main () {
	int any;
	cin >> any;
	if ((any % 4 == 0) and ((any % 100 != 0) or (any % 400 == 0))){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << endl;
}