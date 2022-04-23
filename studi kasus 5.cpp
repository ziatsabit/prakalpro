#include <iostream>
using namespace std;

class matsks{
	public:
		int input();
		int proses(int i);
		void output();
	private:
		int a, nim, sks, b=1;
	    double totalbayar, harga, diskon, total;
	    string matkul[20], nama;
		
};

int matsks::input(){
	cout<<"Masukan Nim :";cin>>nim;
	cout<<"Masukan Nama : ";cin>>nama;
		while(true){
		cout<<"Ingin menambah SKS? 1.Ya 2.Tidak : ";cin>>a;
		if(a==1){
			cout<<"Masukan nama matakuliah : ";cin>>matkul[b];
			cout<<"Masukan SKS matkul tersebut : ";cin>>sks;
      		harga=sks*150000;
      		total+=harga;
			cout<<"Total harga : "<<total<<endl;
		}
		else if(a==2)
		    break;
		b++;
	}
}

int matsks::proses(int i){
	if(i==b){
		return 0;
	}
	else
	    return proses(i + 1);
}

void matsks::output(){
	diskon = total *0.25;
	totalbayar = total-diskon;
	cout<<"========Berikut Rekap Data Anda========"<<endl;
	cout<<" Nama 	="<<nama<<endl;
	cout<<" NIM 	= "<<nim<<endl;
	cout<<" Daftar mata Kuliah = ";
	for(int i=0; i<b; i++){
		cout<<matkul[i]<<endl;
	}
	cout<<" Jumlah SKS = "<<sks<<endl;
	cout<<" Total Pembayaran = "<<totalbayar;
}

main(){
	matsks sks;
	sks.input();
	sks.output();
	return 0;
}
