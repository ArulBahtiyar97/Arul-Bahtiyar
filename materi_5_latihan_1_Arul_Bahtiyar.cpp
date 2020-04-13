#include <iostream>

using namespace std;

void tambah(int x, int y ){
	int Luas;
	
	Luas = x*y;
	cout<<"Luas : "<<Luas<<endl;
	}
	
int main()
{
	int panjang, lebar;
	
	cout << "masukkan panjang persegi panjang: ";
	cin>> panjang;
	cout << "masukkan lebar persegi panjang: ";
	cin>> lebar;
	
	tambah (panjang,lebar);
       
	system("pause");
	return 0;
}

