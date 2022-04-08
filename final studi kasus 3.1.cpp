#include <iostream>
#include<fstream>
using namespace std;

int main(){
	int a=1, b, i=0;
	int pilih, porsi, jarak, n;
	double harga, total, totalbelanja;
	while(true){
		cout<<"\nMasih pesan? 1.ya 2.tidak :";cin>>b;
		if(b==1){
			//INI NANTI ISINYA PESANAN
			cout<<" Daftar Menu"<<endl;
			cout<<" 1. Ayam Goreng Rp17.000"<<endl;
			cout<<" 2. Ayam Geprek Rp21.000"<<endl;
			cout<<" 3. Udang Goreng Rp19.000"<<endl;
			cout<<" 4. Cumi Goreng Rp20.000"<<endl;
			cout<<" 5. Ayam Bakar Rp25.000"<<endl;
	
			//memilih menu
			cout<<" Masukkan pilihan anda = ";cin>>pilih;
			if(pilih==1){
			cout<<"\n Ayam Goreng"<<endl;
			cout<<" Masukkan banyak porsi = ";
			cin>>porsi;
			harga=porsi*17000;
		}
			else if(pilih==2){
			cout<<"\n Ayam Geprek"<<endl;
			cout<<" Masukkan banyak porsi = ";
			cin>>porsi;
			harga=porsi*21000;
		}
			else if(pilih==3){
			cout<<"\n Udang Goreng"<<endl;
			cout<<" Masukkan banyak porsi = ";
			cin>>porsi;
			harga=porsi*19000;
		}
			else if(pilih==4){
			cout<<"\n Cumi Goreng"<<endl;
			cout<<" Masukkan banyak porsi = ";
			cin>>porsi;
			harga=porsi*20000;
		}
			else if(pilih==5){
			cout<<"\n Ayam Bakar"<<endl;
			cout<<" Masukkan banyak porsi = ";
			cin>>porsi;
			harga=porsi*25000;
		}
	total+=harga;
	cout<<total;
		}
		else if(b==2)
		    break;
	}
	//memasukkan jarak order
	cout<<"\n Masukkan jarak antara restoran dan rumah anda = ";
	cin>>jarak;
	if(jarak<=3){
		totalbelanja=total+15000;
	}
	else {
		totalbelanja=total+25000;
	}

	cout<<"\n--------------------------------------------"<<endl;
			cout<<"Mencetak struk..."<<endl<<endl;
			
			ofstream cetak;
			cetak.open("struk belanja.txt");
			cetak<<"=========================================="<<endl;
			cetak<<"    ===---Struk Belanja---===      "<<endl;
			cetak<<"=========================================="<<endl;
			cetak<<" Total Bayar = "<<totalbelanja;
			
			cetak.close();
}
