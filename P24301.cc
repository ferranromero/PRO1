#include <vector>

using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2){
	vector<int> result = v1;
	for(int i = 0; i < v2.size();++i)result.push_back(v2[i]);
	return result;
}


int main(){}
