#include <iostream>
using namespace std;
int main (){
	string sec;
	int counter = 0;
	while(cin >> sec){
		if (sec=="hola") counter++;
	}
	cout << counter << endl;
}