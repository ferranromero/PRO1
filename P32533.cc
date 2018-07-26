#include <iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	for(int fila = 1; fila <= n; fila++){
		for (int col = 1; col <=n; col++){
			if(col < ((n - fila)+1)) cout << '+';
			else if (col > ((n - fila)+ 1)) cout << '*';
			else cout << '/';
		}
		cout << endl;
	}
}