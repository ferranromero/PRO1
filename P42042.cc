#include <iostream>
using namespace std;
int main() {
	char c;
	cin >> c;
	if (c >= 'a' and c <= 'z') {
		cout << "minuscula";
		if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') cout << "vocal";
		else cout << "consonant";
	}
	else ((c >= 'A') and (c <= 'Z')) {
		cout << "majuscula";
		if(c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U') cout << "vocal";
		else cout << "consonant";
	}
}