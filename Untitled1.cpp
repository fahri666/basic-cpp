#include <iostream>
using namespace std;
int main ()

{
	int bobot;
	cout<<"Menentukan Bobot Tubuh Melalui Berat Anda"<<endl;
	cout<<"Input Berat Badan Anda =";
	cin>>bobot;
	
	if (bobot >99)
	{
		cout<<"Anda Teralalu Gemuk"<<endl;
	}
	else if (bobot >60 && bobot <=99)
	{
		cout<<"Berat Anda Seimbang"<<endl;
	}
	else if (bobot >1 && bobot<=55)
	{
		cout<<"Anda Kurus"<<endl;
	}
	return 0;
}
