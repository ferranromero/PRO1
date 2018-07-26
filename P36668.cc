#include <iostream>

using namespace std;

int sumatori(int n){
	if(n == 0) return 0;
	else if (n == 1) return 1;
	else return sumatori (n-1) + n*n;
}

int main(){
	int x;
	cin >> x;
	cout << sumatori(x) << endl;
}