#include <iostream>
#include <vector>

using namespace std;

vector<int> calcula_cims(const vector<int>& v){
	int n = v.size();
	vector<int> result(n);
	for(int i = 1; i < n-1; ++i){
		if((v[i-1] < v[i]) and (v[i] > v[i+1])){
			result[i] = v[i];
		}
	}
	return result;
}

void cal_ncims_last(vector<int>& v, int& cims, int& ultim){
	for(int i = 0; i < v.size(); ++i){
		if(v[i] > 0){
			ultim = v[i];
			++cims;
		}
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> list(n), resultat(n);

	//Llegir les altures i calcular els cims
	for(int i = 0; i < n; ++i) cin >> list[i];
	resultat = calcula_cims(list);


	//Calcular nombre de cims i l'ultim
	int ncims, ultimcim;
	ncims = ultimcim = 0;
	cal_ncims_last(resultat, ncims, ultimcim);
	cout << ncims << ":";

	//Mostrar tots els cims
	bool primer = true;
	for(int i = 0; i < n; ++i){
		if(resultat[i] > 0 and primer) {
			cout << " " <<resultat[i];
			primer = false;
		}
		else if(resultat[i] > 0) cout << " " << resultat[i]; 
	}
	cout << endl;

	//Mostrar els cims mes grans que l'ultim.
	int aux = 0;
	primer = true;
	for (int i = 0; i < n; ++i){
		if(resultat[i] > ultimcim and primer){
			cout << resultat[i];
			++aux;
			primer = false;
		}
		else if(resultat[i] > ultimcim and not primer){
			cout << " " << resultat [i];
			++aux;
		}
	}
	if(aux == 0) cout << "-";
	cout << endl;
}