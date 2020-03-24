#include <iostream>

using namespace std;
int main()
{
	int bil ;
	cout<< "Pilihan Menu Biodata Saya"<<endl;
	cout<<"1.Nama Lengkap"<<endl;
	cout<<"2.Berat Badan"<<endl;
	cout<<"3.Jenis Kelamin"<<endl;
	cout<<"4.Hoby"<<endl;
	cout<<"5.Alamat Lengkap"<<endl;
	cout<<"Masukkan Pilihan Anda : ";
	cin>> bil;
	
		switch (bil){
		case 1:
				cout<<"pilihan ke-"<<bil<<" Arul Bahtiyar "<<endl;
				break;
			case 2:
				cout<<"pilihan ke-"<<bil<<" Berat badan 57.80 "<<endl;
				break;
			case 3:
				cout<<"pilihan ke-"<<bil<<" Laki-Laki "<<endl;
				break;
			case 4:
				cout<<"pilihan ke-"<<bil<<" Hoby bermain Sepakbola "<<endl;
				break;
			case 5:
				cout<<"pilihan ke-"<<bil<<" Jln. Sersan Sukandar 1 Kelurahan Betet Kecamatan Pesantren "<<endl<<" Kecamatan Pesantren Kota Kediri"<<endl;
				break;
			default:
				cout<<"Tidak ada"<<endl;
				break;
		}

	system("pause");
	return 0;
}

