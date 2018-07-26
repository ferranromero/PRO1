#include <iostream>

using namespace std;

struct Date{
	int day, month, year;
};

void get_date (Date& d){
	char c;
	cin >> d.day >> c >> d.month >> c >> d.year;
}

bool less_than (const Date& d1, const Date& d2){
	if(d1.year > d2.year) return false;
	if(d1.year == d2.year and d1.month > d2.month) return false;
	if(d1.year == d2.year and d1.month == d2.month and d1.day > d2.day) return false;
	if(d1.year == d2.year and d1.month == d2.month and d1.day == d2.day) return false;
	return true;
}

int main(){3
	int n;
	Date d1, d2, d3;
	bool found = false;

	cin >> n;

	get_date(d1);
	get_date(d2);
	int i = 2;
	while(not found and i < n){
		get_date(d3);
		if(less_than(d1,d2) and less_than(d2,d3)){
			found = true;
		}
		else{
			d1 = d2;
			d2 = d3;
		}
		++i;
	}
	if(found) cout << d2.day << "/" << d2.month << "/" << d2.year << endl;
	else cout << "cap data trobada" << endl;
}