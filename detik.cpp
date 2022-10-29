#include <iostream>
using namespace std;
int main()


{

	float jam, menit, detik;
	cout<<"Masukkan waktu dalam detik =";
	cin>>detik;
	cout<<endl;
	
	menit = detik/60;
	jam = detik/3600;

	cout<<detik<<" detik = "<<menit <<" Menit"<<endl;
	cout<<detik<<" detik = "<<jam <<" JAM"<<endl;

}
