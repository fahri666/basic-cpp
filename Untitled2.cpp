//Konveresi Suhu Celcius//
#include <iostream>
using namespace std;
int main()

{
	char Nama[20];
	char Nim[11];
	char NoHP[15];
	cout<<"Masukan Nama :";
	gets(Nama);
	cout<<"Masukan Nim :";
	gets(Nim);
	cout<<"Masukan NOHP :";
	gets(NoHP);
	
	
	
	
	cout<<"======Program Konveresi Suhu======" <<endl;
	cout<<endl;
	
	float celcius, fahrenheit, kelvin, reamur;
	
	cout<<"input suhu CELCIUS : ";
	cin>>celcius;
	cout<<endl;
	
	fahrenheit = (9.0/5.0*celcius) + 32;
	kelvin = celcius+273.15;
	reamur = (4.0/5.0*celcius);
	
	
	cout<<celcius<<"Derajat celcius =" <<fahrenheit <<"Derajat fahrenheit";
	cout<<endl;
	cout<<celcius<<"Derajat celcius =" <<kelvin <<"Derajat Kelvin";
	cout<<endl;
	cout<<celcius<<"Derajat  celcius =" <<reamur <<"Derajat Reamur";
	cout<<endl;
	
}
