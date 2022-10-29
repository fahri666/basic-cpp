#include <iostream>
using namespace std;
int main()


{
	float celcius, reamur, fahrenheit, kelvin;
	
	cout<<"Input Suhu fahrenheit =";
	cin>>fahrenheit;
	cout<<endl;
	
	celcius = (fahrenheit-32)* 5.0/9.0;
	kelvin = (fahrenheit-32)* 5.0/9.0 + 273.15;
	reamur = (fahrenheit-32) *4.0/9.0;
	

	cout<<fahrenheit<<"Derajat Fahrenheit = "<<celcius<<"  Derajat celcius" <<endl;
	cout<<fahrenheit<<"Derajat Fahrenheit = "<<kelvin<<"  Derajar Kelvin" <<endl;
	cout<<fahrenheit<<"Derajat Fahrenheit = "<<reamur<<"  Derajat Reamur" <<endl;
}
