#include <iostream>
using namespace std;

int main (){
	char jug1, jug2;
	cin >> jug1 >> jug2;

	if (jug1 == jug2) cout << "-" << endl;
	else if (jug1 == 'A' and jug2 == 'P') cout << "1" << endl;
	else if (jug1 == 'A' and jug2 == 'V') cout << "2" << endl;
	else if (jug1 == 'P' and jug2 == 'A') cout << "2" << endl;
	else if (jug1 == 'P' and jug2 == 'V') cout << "1" << endl;
	else if (jug1 == 'V' and jug2 == 'A') cout << "1" << endl;
	else if (jug1 == 'V' and jug2 == 'P') cout << "2" << endl;

}