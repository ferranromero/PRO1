#include <iostream>
using namespace std;
int main () {
	cout.setf(ios::fixed); 
	cout.precision(4);
	int n;
	double harm = 0;
	cin >> n;
	for (int i = 1; i <= n; i++){
		harm += 1. / i;
	}
	cout << harm << endl;
}