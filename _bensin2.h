#include "_bensin.h"

Hitung::Hitung(){
	cout<<"Data pembeli SPBU mantap\n";
	cout<<"Selamat berkarya\n";
}

istream& operator>>(istream& in, Hitung& masukan) {
	cout<<"Masukan Nama : ";
	in>>masukan.a;
	cout<<"Masukan Jenis bensin : \n1.Pertalite \n2.Pertamax \nPilihan :";
	in>>masukan.b;
	cout<<"Masukan Total liter : ";
	in>>masukan.c;
	return in;
}

ostream& operator<<(ostream& out, const Hitung& keluaran){
	out<<"\n====SPBU mantap==== \n====Struk pembelian====\n";
	out<<"Nama pelanggan :"<<keluaran.a<<endl;
	out<<"Jenis bensin :"<<keluaran.b<<endl;
	out<<"Total liter :"<<keluaran.c<<endl;
	out<<"Total harga :"<<keluaran.jumlah<<endl;
	return out;
}

