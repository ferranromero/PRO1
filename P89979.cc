#include <iostream>
#include <string>

using namespace std;


bool estan_ordenades(string p1, string p2){
	if(p1[0]>p2[0]) return false;
	else if(p1[0]==p2[0] and p1.size() > 0 and p2.size() > 0) return estan_ordenades(p1.substr(1),p2.substr(1));
	else return true;
}

int main() {
        string prev, next;
        int n;
        int i = 0;
        bool found = false;
        while (cin >> n and not found){
                ++i;
                found = true;
                cin >> prev;
                for (int c = 2; c <= n; ++c){
                        cin >> next;
                        if (next < prev) found = false;
                        prev = next;
                }
                if (found) cout << "La primera linia ordenada creixentment es la " << i << "." << endl;
        }
        if (not found) cout << "No hi ha cap linia ordenada creixentment." << endl;
}
