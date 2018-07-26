#include <iostream>
#include <math.h>

using namespace std;

void escriu_linia(char c, string s, bool b) {
	cout << s << "('" << c << "') = ";
	if (b) cout << "cert" << endl;
	else cout << "fals" << endl;
}

int main(){
	char in;
	cin >> in;
	if((in >= 'a' and in <= 'z')or(in >= 'A' and in <= 'Z')){
		escriu_linia(in,"lletra",true);
		if(in >= 'a' and in <= 'z'){
			if(in == 'a' or in == 'e' or in == 'i' or in == 'o' or in == 'u'){
				escriu_linia(in,"vocal",true);
				escriu_linia(in,"consonant",false);
				escriu_linia(in,"majuscula",false);
				escriu_linia(in,"minuscula",true);
			}
			else{
				escriu_linia(in,"vocal",false);
				escriu_linia(in,"consonant",true);
				escriu_linia(in,"majuscula",false);
				escriu_linia(in,"minuscula",true);
			}
		}
		else if(in >= 'A' and in <= 'Z'){
			if(in == 'A' or in == 'E' or in == 'I' or in == 'O' or in == 'U'){
				escriu_linia(in,"vocal",true);
				escriu_linia(in,"consonant",false);
				escriu_linia(in,"majuscula",true);
				escriu_linia(in,"minuscula",false);
			}
			else{
				escriu_linia(in,"vocal",false);
				escriu_linia(in,"consonant",true);
				escriu_linia(in,"majuscula",true);
				escriu_linia(in,"minuscula",false);
			}
		}
		escriu_linia(in,"digit",false);
	}
	else if(in >= '0' and in <= '9'){
		escriu_linia(in,"lletra",false);
		escriu_linia(in,"vocal",false);
		escriu_linia(in,"consonant",false);
		escriu_linia(in,"majuscula",false);
		escriu_linia(in,"minuscula",false);
		escriu_linia(in,"digit",true);
	}
	else{
		escriu_linia(in,"lletra",false);
		escriu_linia(in,"vocal",false);
		escriu_linia(in,"consonant",false);
		escriu_linia(in,"majuscula",false);
		escriu_linia(in,"minuscula",false);
		escriu_linia(in,"digit",false);		
	}
}
