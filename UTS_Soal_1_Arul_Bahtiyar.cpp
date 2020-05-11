#include<iostream>

using namespace std;

void tambah(int x, int y){
	int Usia;
	
	Usia = x-y;
	cout<<"Usia anda adalah"<<Usia<<endl;
}

int main()
{
	char ulang;
	do
	{
	int a, b, Usia;
	
	cout<<"Masukkan tahun sekarang :";
	cin>>a;
	cout<<"Masukkan tahun lahir :";
	cin>>b;
	
	Usia = a-b;
	
	cout<<"Usia Anda adalah :"<<Usia<<endl;
	
	if(Usia>=1,Usia<=5)
		cout<<"Balita"<<endl;
		
		else
		if(Usia>=6,Usia<=11)
		cout<<"Kategori Usia Anda adalah Anak - anak"<<endl;
		
		else
		if(Usia>=12,Usia<=25)
		cout<<"Kategori Usia Anda adalah Remaja"<<endl;
	
		else
		if(Usia>=26,Usia<=45)
		cout<<"Kategori Usia Anda adalah Dewasa"<<endl;
		
		else
		if(Usia>=46)
		cout<<"Kategori Usia Anda adalah Manula"<<endl;
		
		cout<<"Apakah Anda Ingin Menjalankan Program Lagi :"<<endl;
		cout<<"Pilihan (y/n)";
		cin>>ulang;
	}
	while(ulang=='y');
	cout<<"Program Berhenti"<<endl;
	
	system("pause");
	return 0;
}

