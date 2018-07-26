#include <iostream>
using namespace std;
//Pre: CIN una lletra o dígit
//Post: Indicar si es tracta d'una lletra
int main(){
	char c;
	cin >> c;
	if (c >= 'A' and c <= 'Z') cout << "Lletra majuscula";
	else if (c >= 'a' and c <= 'z') cout << "Lletra minuscula";
	else if (c >= '0' and c <= '9') cout << "Numero";
	cout << endl;
}
