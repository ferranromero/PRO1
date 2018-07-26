#include <iostream>
#include <vector>

using namespace std;

struct Temps{
	int hora, minut, segon;
};

void un_segon(const Temps& t, Temps& t1, Temps& t2){
	//Sumar 1 sec a t1
	t1 = t2 = t;
	++t1.segon;
	if(t1.segon == 60){
		++t1.minut;
		t1.segon = 0;
	} 
	if(t1.minut == 60){
		++t1.hora;
		t1.minut = 0;
	}
	if(t1.hora == 24){
		t1.hora = 0;
	}
	//Restar 1 segon a t2
	--t2.segon;
	if(t2.segon < 0){
		--t2.minut;
		t2.segon = 59;
	}
	if(t2.minut < 0){
		--t2.hora;
		t2.minut = 59;
	}
	if(t2.hora == -1){
		t2.hora = 23;
	}
}

int main(){
int s, m, h;
while(cin >> h >> m >> s){
	Temps t0, t1, t2;
	t0.hora = h;
	t0.minut = m;
	t0.segon = s;
	un_segon(t0, t1, t2);
	cout << t1.hora << " " << t1.minut << " " << t1.segon << endl;
	cout << t2.hora << " " << t2.minut << " " << t2.segon << endl;
}
}