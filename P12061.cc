#include <iostream>
#include <string>
using namespace std;
 
int main() {
   string n;
   bool end, first, cierto;
   end = first = false;
   cierto = true;
   int cont = 0;
       
   while (cin >> n and not end and cierto) {
	   if(n == "final" and not first) cierto = false;
       else if(n == "final" and first) end = true;
       else if( n == "principi") first = true;
       else if(first) ++cont;
    } 
    if(end) cout << cont << endl;
    else cout << "sequencia incorrecta" << endl;
}
