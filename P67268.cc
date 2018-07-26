#include <iostream>
#include <vector>

using namespace std;

void llegir_vector (vector<int>& llista){
	for(int i = 0; i < llista.size(); ++i){
		cin >> llista[i];
	}
}


int main(){
	int n;
	while(cin >> n){
		vector<int> list(n);
		for(int i = 0; i < list.size(); ++i){
			cin >> list[i];	
		} 
		for(int i = 0; i < (n-1)/2; ++i){
			list[i] = list[(n-1)-i];
		}
		for(int i = 0; i < list.size(); ++i){
			cout << list[i];	
		} 
	}
}