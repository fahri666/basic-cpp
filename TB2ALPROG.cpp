#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
int main()
{
	int kamar, harga, lama, bayar;
	string nkamar;
	
	
	cout<<"          Penyewaan Kamar Al fatih"<<endl;
	cout<<"======================================================"<<endl;
	cout<<"Tipe Kamar            Jenis Kamar        Harga"<<endl;
	cout<<"   1                  Tulip              Rp.500.000"<<endl;
	cout<<"   2                  Teratai            Rp.1.000.000"<<endl;
	cout<<"   3                  Anggrek            Rp.1.500.000"<<endl;
	cout<<"   4                  Rosalia            Rp.2.000.000"<<endl;
	cout<<"   5                  Cendana            Rp.3.000.000"<<endl;
	
	cout<<"Pilih tipe Kamar (1-5)      :";
	cin>>kamar;
	cout<<"Berapa Malam Anda menginap  :";
	cin>>lama;
	cout<<"================================="<<endl;

	
	if (kamar==1){
		
		harga=500000
		;nkamar="Tulip";
	}
	else if (kamar==2){
		harga=1000000
		;nkamar="Teratai";
	}
	else if (kamar==3){
		harga=1500000
		;nkamar="Anggrek";
	}
	else if (kamar==4){
		harga=2000000
	;	nkamar="Rosalia";
	}
	else if (kamar==5){
		harga=3000000
		;nkamar="cendana";
	}
	bayar=lama*harga;
	
	cout<<"Anda Memilih tipe kamar     :"<<kamar<<endl;
	cout<<"Jenis Kamar                 :"<<nkamar<<endl;
	cout<<"Harga Permalam              :"<<harga<<endl;
	cout<<"Lama Meninap                :"<<lama<<" Hari"<<endl;
	cout<<"total Harga yang harus di bayar : "<<bayar<<endl;
	
	      
}
