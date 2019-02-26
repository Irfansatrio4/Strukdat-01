/*
Nama : irfan satrio nugroho
kelas : A
NPM : 140810180003
tgl buat : 26-02-2019
Deskripsi : Program fizz buzz dengan jarak angka dari 1-100 d
			-buzz == 3
			-fizz == 5
			-fizz buzz ==3==5
*/

#include <iostream>

using namespace std;

void fizzbuzz (int jarak) //pendeklarasian funsi void dan parameter
{
	jarak = 100; //batas jarak dari 1 -100
	for (int i = 1 ; i<=jarak ; i++ )//looping fizzbuzz
	{
		if (i %3==0 && i %5==0) //jika angka abis dibagi 3 dan 5 
		{
			cout<<"FIZZBUZZ"<<endl;
		}
		else if (i %3!= 0 && i %5==0)//jika angka abis dibagi 5
		{
			cout<<"BUZZ"<<endl;
		}
		else if (i %3==0 && i %5!=0)//jika angka abis dibagi 3
		{
			cout<<"FIZZ"<<endl;
		}
		else 
		{
			cout<<i<<endl;
		}
	}
}

int main ()
{
	int jarak;
	fizzbuzz(jarak);
}
