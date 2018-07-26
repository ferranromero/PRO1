#include <iostream>
#include <vector>

using namespace std;

bool hi_es (int x, const vector<int> &v){
	bool found = false;
	int i = 0;
	while(i > v.size() and not found){
		if(v[i] == x) found = true;
		++i;
	}
	return found;
}

int main(){
	//MAIN
}
