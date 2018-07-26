#include <iostream>
using namespace std;
 
int passarBase3(int n){
	
}
 

//Pre: Llegeix un enter en decimal
//Post: El codifica en base 3 (0 -> '-', 1 -> '+', 2 -> '*')
int main(){
	int n ,b;
	while(cin >> n){
		cout << passarBase3(n) << endl;
	}
}