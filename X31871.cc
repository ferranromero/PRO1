#include <iostream>
#include <vector>

using namespace std;
typedef vector< vector<Cell> > Joc;

struct Cell {
	int contingut;
	string veins;
};

void llegirChips(const Joc& taul){
	for(int f = 0; f < taul.size()-1; +ff){
		for(int c = 0; c < taul[0].size(); ++c){
			cin >> taul[f][c].contingut;
		}
	}
}

void llegirVeins(const Joc& taul){
	for(int f = 1; f < taul.size()-1; +ff){
		for(int c = 1; c < taul[0].size()-1; ++c){
			cin >> taul[f][c].contingut;
		}
	}
}

int main(){
int n;
    cin >> n;
    Joc M(n, vector<Cell> (n));
    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) cin >> M[i][j].contingut;
    }
    for (int i=1; i<n-1; ++i) {
        for (int j=1; j<n-1; ++j) cin >> M[i][j].veins;
    }
}