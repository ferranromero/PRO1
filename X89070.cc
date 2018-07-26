#include <iostream>
using namespace std;

int main(){
	int x, y, z;
	cin >> x >> y >> z;
	int maxim, minim;
	if(x > y and x > z) maxim = x;
	else if(y > x and y > z) maxim = y;
	else if(z > y and z > x) maxim = z;
	if(x < y and x < z) minim = x;
	else if(y < x and y < z) minim = y;
	else if(z < y and z < x) minim = z;
	cout << minim + maxim << endl;
}