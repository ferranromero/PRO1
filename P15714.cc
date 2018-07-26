#include <iostream>
#include <math.h>
using namespace std;

int main(){
	char c;
	int count1, count2, count3,size;
	count1 = count2 = count3 = size = 0;
	while(cin >> c and c != '.'){
		if(c == '-'){
			if(size < 5 and size > 0) ++count1;
			else if(size >= 5 and size <= 9) ++count2;
			else if (size > 9) ++count3;
			size = 0;
		}
		else ++size;
	}
	if(size > 0){
		if(size < 5 and size > 0) ++count1;
		else if(size >= 5 and size <= 9) ++count2;
		else if (size > 9) ++count3;
	}
	cout << count1 << "," << count2 << "," << count3 << endl;
}
