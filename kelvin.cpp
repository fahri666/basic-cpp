#include <iostream>
using namespace std;
int main()


{
	float celcius, reamur, fahrenheit, kelvin;
	
	cout<<"Input Suhu kelvin =";
	cin>>kelvin;
	cout<<endl;
	
	celcius = (kelvin-273.15);
	reamur = (kelvin-273.15)*4.0/5.0;
	fahrenheit = (kelvin-273.15)*9.0/5.0 + 32;
	

	cout<<kelvin<<"Derajat kelvin = "<<celcius<<"  Derajat celcius" <<endl;
	cout<<kelvin<<"Derajat kelvin = "<<fahrenheit<<"  Derajar fahrenheit" <<endl;
	cout<<kelvin<<"Derajat kelvin = "<<reamur<<"  Derajat Reamur" <<endl;
}
