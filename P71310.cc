#include <iostream>
#include <vector>

using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v){ 
	double result = 0;
	for(int i = 0; i < u.size(); ++i){
		result += u[i]*v[i];
	}
	return result;
}

int main(){
	vector<double> test(2);
	vector<double> test2(2);
	cout << producte_escalar(test,test2) << endl;
}