#include <iostream>

using namespace std;
int main()
{
	string username = "admin", password = "12345", temp_username, temp_password;
	
	cout<<"masukkan username : ";
	cin>>temp_username;
	
	cout<<"masukkan password : ";
	cin>>temp_password;
	
	if (temp_username == username)
	{ 
		if(temp_password == password)
		cout<<"SELAMAT, anda berhasil login"<<endl;
		else 
		cout<<"Mohon maaf, login tidak berhasil"<<endl;
	}
	else
	cout<<"Mohon maaf, login tidak berhasil"<<endl;
	
	system("pause");
	return 0;
	}
