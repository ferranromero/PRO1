#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

struct Provincia {
	string nom;
	string capital;
	int habitants;
	int area;
	double pib;
};

struct Pais {
	string nom;
	string capital;
	vector <Provincia> provs;
};

typedef vector<Pais> Paisos;

int habitants(const Paisos& p, double x){
    int habitants = 0;
    for(int i = 0; i < p.size();++i){
        int counter, suma;
        counter = suma = 0;
        for(int m = 0; m < p[i].provs.size();++m){
            if(p[i].provs[m].pib <= x){
                ++counter;
            }
            suma += p[i].provs[m].habitants;
        }
        if(counter >= 2){
            habitants += suma;
        }
    }
    return habitants;
}

int main(){

}