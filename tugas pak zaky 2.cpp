#include <iostream>

using namespace std;

int main()
{
	int usia = 19;
	float berat = 57.80;
	char jenis = 'L';
	string hoby = "sepakbola";
	bool hasil = false ;
	
	cout<<"masukkan usia saya :";
	cin>>usia;
	
	cout<<"masukkan berat badan :";
	cin>>berat;
	
	cout<<"masukkan jenis :";
	cin>>jenis;
	
	cout<<"masukkan hoby :";
	cin>>hoby;
	
	cout<<"hasil :";
	cin>>hasil;
	
    cout<<"usia saya " <<usia<<" tahun"<<endl;
    cout<<"berat badan saya "<<berat<<" kilo"<<endl;
    cout<<"jenis kelamin saya "<<jenis<<endl;
    cout<<"hoby saya "<<hoby<<endl;
    cout<<"apakah saya merokok"<<false<<endl;
	
	system("pause");
	return 0;
}
