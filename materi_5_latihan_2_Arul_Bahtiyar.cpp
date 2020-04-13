#include <iostream>

using namespace std;

int tambah(int x,int y){
	int Luas;
	
	Luas = x*y;
	cout<<"Luas : "<<Luas<<endl;
	return Luas;
	}
	
int main()
{
	int panjang, lebar, Luas;
	
	cout << "masukkan panjang persegi panjang: ";
	cin>> panjang;
	cout << "masukkan lebar persegi panjang: ";
	cin>> lebar;
	
	
	Luas = tambah(panjang,lebar);
	cout<<"Luas : "<<Luas<<endl;

       
	system("pause");
	return 0;
}

