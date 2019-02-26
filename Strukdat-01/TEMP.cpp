/*
Nama : irfan satrio nugroho
kelas : A
NPM : 140810180003
tgl buat : 26-02-2019
desk : input celcius output fahrenheit
*/

#include <iostream>

using namespace std;

float perubahanSuhu (float celcius,float fahrenheit)
{
	fahrenheit = (celcius*9/5)+32;
	cout<<fahrenheit;
	
	return fahrenheit ; 
}

int main ()
{
 	float fahrenheit;
 	float celcius;
 	
 	cout<<"Celcius = ";
 	cin>>celcius;
 	
 	cout<<"Temp = "; perubahanSuhu (celcius,fahrenheit);
}
