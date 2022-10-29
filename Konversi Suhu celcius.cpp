//Konversi Suhu Celcius//
#include <iostream>
using namespace std;
int main()

{
	char Nama[20];
	char Nim[11];
	char NomorHp[15];
	cout<<"Masukkan Nama :";
	gets(Nama);
	cout<<"Masukkan Nim :";
	gets(Nim);
	cout<<"Masukkan Nomor Hp :";
	gets(NomorHp);
	cout<<"==========================="<<endl;
		
	
	
	cout<<" Program Konversi Suhu "<<endl;
	cout<<"==========================="<<endl;
	cout<<endl;
	
	float celc, fahr, kelv, ream;
	
	cout<<"Input suhu celcius : ";
	cin>>celc;
	cout<<endl;
	
	fahr = (9.0/5.0 * celc) + 32;
	kelv = celc + 273.15;
	ream = celc * (4.0/5.0);
	
	cout<<celc<<" derajat Celcius = "<<fahr<<" derajat Fahrenheit";
	cout<<endl;
	cout<<celc<<" derajat Celcius = "<<kelv<<" derajat Kelvin";
	cout<<endl;
	cout<<celc<<" derajat Celcius = "<<ream <<" derajat Reamur";
	cout<<endl;
	
	return 0;
	
	
}
