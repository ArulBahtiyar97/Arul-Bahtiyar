#include <iostream>

using namespace std;

int main()
{
	string nama [6][2] = {{"Indonesia","Indonesia"},{"Malaysia","Malaysia"},{"Brunei","Brunei"},{"Thailand","Thailand"},{"Timor Leste","Timor Leste"},{"Vietnam","Vietnam"}};
	
	cout<<"menampilkan secara manual"<<endl;
	cout<<"DAFTAR NEGARA ASEAN"<<endl;
	cout<<"Nama Negara : "<<nama[0][0]<<endl;
	cout<<"Nama Negara : "<<nama[0][1]<<endl;
	cout<<"Nama Negara : "<<nama[1][0]<<endl;
	cout<<"Nama Negara : "<<nama[1][1]<<endl;
	cout<<"Nama Negara : "<<nama[2][0]<<endl;
	cout<<"Nama Negara : "<<nama[2][1]<<endl;
	cout<<"Nama Negara : "<<nama[3][0]<<endl;
	cout<<"Nama Negara : "<<nama[3][1]<<endl;
	cout<<"Nama Negara : "<<nama[4][0]<<endl;
	cout<<"Nama Negara : "<<nama[4][1]<<endl;
	cout<<"Nama Negara : "<<nama[5][0]<<endl;
	cout<<"Nama Negara : "<<nama[5][1]<<endl;
	
	cout<<"Menampilkan dengan menggunakan for "<<endl;
	cout<<"DAFTAR NEGARA ASEAN"<<endl;
	for (int i = 0; i<6;i++)
	{
        for(int j=0;j<2;j++)
		{
			cout<<"Nama Negara[" <<i<< "][" <<j<< "] = "<<nama[i][j]<<endl;
	    }
	}
	system("pause");
	return 0;
	
}
	

	
	
	
