/*
Nama : irfan satrio nugroho
kelas : A
NPM : 140810180003
tgl buat : 26-02-2019
desk : swap nilai
*/

#include <iostream>

using namespace std;

void swamp (int& a, int& b)
{
	int temp;
	temp = a;
	a=b;
	b=temp;
}

int main ()
{
	int a,b;
	cout<<"Masukan Nilai A : ";cin>>a;
	cout<<"Masukan Nilai B : ";cin>>b;
	cout<<"Nilai (A,B) = ("<<a<<","<<b<<")"<<endl;
	swamp (a,b);
	cout<<"hasil swap : ("<<a<<","<<b<<")";
}
