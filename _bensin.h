#include <iostream>
using namespace std;

class Hitung {
	friend ostream& operator<<(ostream&, const Hitung&);
	friend istream& operator>>(istream&, Hitung&);
public:
	Hitung();
	void hitung_jumlahnya(){switch(b){
		case 1 : jumlah=7000*c;
		break;
		case 2 : jumlah=9000*c;
		break;
	};}
private:
	char a[10];
	int b,c;
	int jumlah;
};

