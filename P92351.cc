#include <iostream>
using namespace std;
int main() {
	int a, b, d, residu;
	cin >> a >> b;
	d = a / b;
	residu = a % b;
	cout << d << " " << residu << endl;
}