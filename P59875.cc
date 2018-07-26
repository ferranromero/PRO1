#include <iostream>
using namespace std;
int main () {
	int x, y;
	cin >> x >> y;
	int max, min;
	if (x >= y){
		max = x;
		min = y;
	}
	else {
		max = y;
		min = x;
	}
	for (int i = max; i >= min;i--){
		cout << i << endl;
	}
}