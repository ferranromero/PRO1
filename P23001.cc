#include <iostream>
using namespace std;

int main(){
	string base, aux;
	int seq, max;
	cin >> base;
	seq = max = 1;
	while(cin >> aux){
		if(aux == base){
			++seq;
			if(seq > max) max = seq;
		}
		else seq = 0;
	}
	cout << max << endl;
}
