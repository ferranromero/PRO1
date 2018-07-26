#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
	string input;
	
	vector<int> v(10);
	while(cin >> input){
		int suma, aux,j,posx;
		suma = j = posx = 0;
		aux = 10;
		for(int i = 0; i < 10; ++i){
			if(input[i]=='?')  posx = 10 -i;
			else if(input[i]=='X') suma += 10*aux;
			else suma+= (input[i] - '0')*aux;
			--aux;	
		}
		while((suma+(aux*j))%11!=0) ++j;
		if (j == 10) cout << "X" << endl;
		else cout << j << endl;
	}
}
