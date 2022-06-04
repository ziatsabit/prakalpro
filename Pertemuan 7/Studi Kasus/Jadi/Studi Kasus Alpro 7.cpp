#include <iostream>
#include <string.h>
using namespace std;

class mhs{
public:
	void input();
	void proses();
	void output();
};

typedef struct{
	int nim;
	char nama[10];
}
   jmh;
   jmh mhsw[10];
   jmh temp;
   int n,i,b,j,cari,ada;

void mhs::input(){
	cout<<"=============================================="<<endl;
	cout<<"           Masukan data mahasiswa             "<<endl;
	cout<<"=============================================="<<endl;
	
	cout<<"Masukan banyak mahasiswa : ";cin>>n;
	
	for(i=0; i<n; i++){
		cout<<endl;
		cout<<"Mahasiswa ke-"<<(i+1)<<" : "<<endl;
		cout<<"Masukan NIM Mahasiswa  : ";cin>>mhsw[i].nim;
		cout<<"Masukan Nama Mahasiswa : ";cin>>mhsw[i].nama;
	}
}
void mhs::proses(){
	system("cls");
	cout<<endl;
	cout<<"Data mahasiswa"<<endl;
	cout<<"=============================================="<<endl;
	cout<<"|         NIM         |         Nama         |"<<endl;
	cout<<"=============================================="<<endl;
	
	for(i=0; i<n; i++){
		cout<<"| "<<mhsw[i].nim<<"\t\t|"<<mhsw[i].nama<<endl;
	}
	cout<<endl;
	cout<<"=============================================="<<endl;
	     for(i=0;i<n;i++){
             for(j=0;j<n-1;j++){
                if(b=mhsw[j].nim > mhsw[j+1].nim){
                	temp.nim=mhsw[j].nim;
                  mhsw[j].nim=mhsw[j+1].nim;
                  mhsw[j+1].nim=temp.nim;
	
		          	strcpy(temp.nama,mhsw[j].nama);
		          	strcpy(mhsw[j].nama,mhsw[j+1].nama);
		          	strcpy(mhsw[j+1].nama,temp.nama);
                    }
                  }
               }
        cout<<endl;
}
void mhs::output(){
    cout<<"Data setelah diurutkan : "<<endl;
    cout<<"=============================================="<<endl;
    cout<<"|         NIM         |         Nama         |"<<endl;
    cout<<"=============================================="<<endl;
    for(j=0; j<n; j++){
    	cout<<"| "<<mhsw[j].nim<<"\t\t|"<<mhsw[j].nama<<endl;
	}
	cout<<endl;
	system("pause");
	system("cls");
	cout<<"=============================================="<<endl;
	cout<<"            Mencari Data Mahasiswa            "<<endl;
	cout<<"=============================================="<<endl;
	cout<<"Masukan NIM Mahasiswa : ";cin>>cari;
	ada=0;
	for(j=0; j<n; j++){
		if(mhsw[j].nim==cari){
			ada=1;
			cout<<endl;
			cout<<"=============================================="<<endl;
    		cout<<"|         NIM         |         Nama         |"<<endl;
    		cout<<"=============================================="<<endl;
    		cout<<"| "<<mhsw[j].nim<<"\t\t|"<<mhsw[j].nama<<endl;
		}
	}
	cout<<"=============================================="<<endl;
	system("pause");
	if(ada == 0){
		cout<<"Tidak ada data"<<endl;
	}
}

int main(){
	mhs mhs;
	mhs.input();
	mhs.proses();
	mhs.output();
	return 0;
}

