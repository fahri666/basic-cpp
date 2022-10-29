#include <iostream>
using namespace std;
int main()


{
	float celcius, reamur, fahrenheit, kelvin;
	
	cout<<"Input Suhu reamur =";
	cin>>reamur;
	cout<<endl;
	
	celcius = reamur *(5.0/4.0);
	kelvin = reamur *(5.0/4.0)+273.15;
	fahrenheit = reamur *(9.0/4.0) + 32;
	

	cout<<reamur<<"Derajat reamur = "<<celcius<<"  Derajat celcius" <<endl;
	cout<<reamur<<"Derajat reamur = "<<kelvin<<"  Derajar kelvin" <<endl;
	cout<<reamur<<"Derajat reamur = "<<fahrenheit<<"  Derajat fahrenheit" <<endl;
}
