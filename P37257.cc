#include <iostream>

using namespace std;

bool tres_digits_seguits_iguals(int n, int b) {
    if (n < b*b) return false;
    else {
        if ((n%b) == ((n/b)%b) and (n%b) == ((n/(b*b))%b)) return true;
        else return tres_digits_seguits_iguals(n/b, b);
    }
}
 
