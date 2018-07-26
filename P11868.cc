#include <iostream>
#include <vector>

using namespace std;

//Pre: Un natural n. Una sequencia de n nombres. Una segona sequencia
//de n nombres on els seus elements x: x <= (n-1).
//Post: La sequencia de nombres pren l'ordre indicat per els punters
//de la segona sequencia de valors. (Funcio swap)


int main(){
	int n, aux;
	cin >> n;
	vector<int> va(n);
	for(int i =0; i < va.size();++i) cin >> va[i];
	vector<int> vb(n);
	for(int i = 0; i < vb.size(); ++i){
		cin >> aux;
		vb[aux] = va[i];
	}
}
