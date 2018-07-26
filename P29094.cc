#include <iostream>
#include <vector>

using namespace std;

//Pre: 0 <= m < v[0...m].
//Post: El maxim, en cas d'empat, la posicio mes petita

int posicio_maxim(const vector<double>& v, int m){
	int max = 0;
	double max_value = v[0];
	for(int i = 1; i <= m; ++i){
		if(max_value < v[i]){
			max = i;
			max_value = v[i];
		}
	}
	return max;
}

int main() {

}