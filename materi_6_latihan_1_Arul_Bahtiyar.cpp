#include <iostream>

using namespace std;

int main()
{
	string nama[6] = {"Indonesia","Malaysia","Brunei","Thailand","Timor Leste","Vietnam"};
	
	cout<<"menampilkan secara manual"<<endl;
	cout<<"DAFTAR NEGARA ASEAN"<<endl;
	cout<<"NAMA : "<<nama[0]<<endl;
	cout<<"NAMA : "<<nama[1]<<endl;
	cout<<"NAMA : "<<nama[2]<<endl;
	cout<<"NAMA : "<<nama[3]<<endl;
	cout<<"NAMA : "<<nama[4]<<endl;
	cout<<"NAMA : "<<nama[5]<<endl;
	
	cout<<"Menampilkan dengan menggunakan for "<<endl;
	cout<<"DAFTAR NEGARA ASEAN"<<endl;
	for (int i=0; i<6; i++)
	{
	cout<<"NAMA : "<<nama[i]<<endl;
	}
	
	
	
	system("pause");
	return 0;
	
	}
	
	
	
