#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.precision(4);
	int n, m;
	double aux, min, max, avg;
	cin >> n;
	for(int i = 0; i< n; ++i){
		cin >> m;
		min = max = avg = 0.0000;
		for(int j = 0; j < m; ++j){
			cin >> aux;
			avg += aux;
			if(j == 0) min = max = aux;
			else{
				if(aux > max) max = aux;
				else if (aux < min) min = aux;
			}
		}
		avg = avg/m;
		cout << min << " " << max << " " << avg << endl;
	}
}
