#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()

{
	char Nama[20];
	char Nim[11];
	int D,S,P,K ;
	float JML ;
	
	cout<<"NAMA :";
	gets (Nama);
	cout<<"NIM  :";
	gets (Nim);
	cout<<"Masukkan Jumlah Tanda Tangan"<<endl;
	cout<<"Dosen             =";
	cin>>D;
	cout<<"Mahasiswa Senior  =";
	cin>>S;
	cout<<"Panitia           =";
	cin>>P;
	cout<<"Karyawan          =";
	cin>>K;

	JML =(D*5.0)+(S*4.0)+(P*3.0)+(K*2);
	cout<<"Total             :"<<JML<<endl;
	if (JML>=80)
	{
		cout<<"ANDA LULUS"<<endl;
	
	}

	else
{

		cout<<"ANDA TIDAK LULUS"<<endl;
}

}

	
