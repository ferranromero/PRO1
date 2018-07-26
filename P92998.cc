#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	string aux;
	vector<string> v;
	int n;
	cin >> n;
	while(cin >> aux)v.push_back(aux);
	for(int i = n-1; i >= 0; --i) cout << v[i] << endl;
}
