#include <iostream>
using namespace std;
int main () {
	char dir;
	int x, y;
	while(cin >> dir){
		if(dir == 'n') y--;
		else if(dir == 's') y++;
		else if(dir == 'e') x++;
		else if(dir == 'o') x--;
	}
	cout << "(" << x << ", "<< y << ")" << endl;
}