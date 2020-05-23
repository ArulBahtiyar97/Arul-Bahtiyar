#include <iostream>

using namespace std;
struct Handphone{
	string merk;
	int tahun;
	string nama[3];
	};
int main()
{
	cout<<"Daftar Harga HP Terbaru"<<endl;
	
	Handphone Hp [4]; 
	
	Hp[0].merk ="Xiaomi";
	Hp[0].tahun = 2020;
	Hp[0].nama[0] ="Redmi S2";
	Hp[0].nama[1] ="Redmi Note 7";
	Hp[0].nama[2] ="Redmi Note 8";
	
	Hp[1].merk = "Realme";
	Hp[1].tahun = 2020;
	Hp[1].nama[0] ="Realme C2";
	Hp[1].nama[1] ="Realme 5";
	Hp[1].nama[2] ="Realme 6";
	
	Hp[2].merk = "Oppo";
	Hp[2].tahun = 2020;
	Hp[2].nama[0] ="Oppo Reno 3";
	Hp[2].nama[1] ="Oppo A91";
	Hp[2].nama[2] ="Oppo A5";
	
	Hp[3].merk = "Asus";
	Hp[3].tahun = 2020;
	Hp[3].nama[0] ="Asus Zenfone 5 Lite";
	Hp[3].nama[1] ="Asus Zenfone Max Pro";
	Hp[3].nama[2] ="Asus Zenfone 4 Selfie";	
		
	cout<<"Merk : "<<Hp[0].merk<<endl;
	cout<<"Tahun : "<<Hp[0].tahun<<endl;
	cout<<"Tipe 1 : "<<Hp[0].nama[0]<<endl;
	cout<<"Tipe 2 : "<<Hp[0].nama[1]<<endl;
	cout<<"Tipe 3 : "<<Hp[0].nama[2]<<endl;
	
	cout<<endl;
	
	cout<<"Merk : "<<Hp[1].merk<<endl;
	cout<<"Tahun : "<<Hp[1].tahun<<endl;
	cout<<"Tipe 1 : "<<Hp[1].nama[0]<<endl;
	cout<<"Tipe 2 : "<<Hp[1].nama[1]<<endl;
	cout<<"Tipe 3 : "<<Hp[1].nama[2]<<endl;
	
	cout<<endl;
	
	cout<<"Merk : "<<Hp[2].merk<<endl;
	cout<<"Tahun : "<<Hp[2].tahun<<endl;
	cout<<"Tipe 1 : "<<Hp[2].nama[0]<<endl;
	cout<<"Tipe 2 : "<<Hp[2].nama[1]<<endl;
	cout<<"Tipe 3 : "<<Hp[2].nama[2]<<endl;
	
	cout<<endl;
	
	cout<<"Merk : "<<Hp[3].merk<<endl;
	cout<<"Tahun : "<<Hp[3].tahun<<endl;
	cout<<"Tipe 1 : "<<Hp[3].nama[0]<<endl;
	cout<<"Tipe 2 : "<<Hp[3].nama[1]<<endl;
	cout<<"Tipe 3 : "<<Hp[3].nama[2]<<endl;
	
	cout<<endl;
	
	
	
	system("pause");
	return 0;
	
	}
	
	
	
