#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
	char Nama[30];
	char Nim[11];
	int A,B,C,D;
	float E;
	
	cout<<"Masukan Nama        =";
	gets (Nama);
	cout<<"Masukan NIM         =";
	gets (Nim);
	cout<<"Masukan Nilai Absen =";
	cin>>A;
	cout<<"Masukan Nilai Tugas =";
	cin>>B;
	cout<<"Masukan Nilai UTS   =";
	cin>>C;
	cout<<"Masukan Nilai UAS   =";
	cin>>D;
	cout<<"-----------------------------"<<endl;
	cout<<"Nama  :"<<Nama<<endl;
	cout<<"NIM   :"<<Nim<<endl;
	cout<<"Absen :"<<A<<endl;
	cout<<"Tugas :"<<B<<endl;
	cout<<"UTS   :"<<C<<endl;
	cout<<"UAS   :"<<D<<endl;
	E =(A*0.1)+(B*0.2)+(C*0.3)+(D*0.4);
	cout<<"Total :"<<E<<endl;
	if (E>=70)
	{
		cout<<"KAMU LULUS"<<endl;
	}
	else
{
		cout<<"KAMU TIDAK LULUS"<<endl;
}

}

	
