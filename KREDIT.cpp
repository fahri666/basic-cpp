#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()

{
	char Nama[20];
	char Nim[11];
	int A,B,C ;
	int I ;
	
	cout<<"NAMA :";
	gets (Nama);
	cout<<"NIM  :";
	gets (Nim);
	cout<<"Jumlah Pendapatan Tetap        =";
	cin>>A;
	cout<<"Jumlah Pendapatan Tambahan     =";
	cin>>B;
	cout<<"Jumlah Pendapatan Keluarga     =";
	cin>>C;

	I =(A*1)+(B*1/5)+(C*1/3);
	cout<<"Total :"<<I<<endl;
	if (I>=1000000)
	{
		cout<<"BERHAK MENDAPATKAN KREDIT"<<endl;
	
	}

	else
{

		cout<<"TIDAK BERHAK MENDAPATKAN KREDIT"<<endl;
}

}

	
