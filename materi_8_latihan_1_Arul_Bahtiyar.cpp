#include <iostream>
using namespace std;

string hasil [3] = {"maman","paijo","eko"}; //variabel hasil sebagai variabel global

void tampil () {
	string hasil [3] = {"siti","mimin","ayu"}; //variabel hasil sebagai variabel lokal
	
	for (int i=0;i<3;i++){
		cout<<"Nama : "<<hasil [i]<<endl;
	}
}

int main ()
{
	tampil ();
	cout<<endl;
	for(int i=0;i<3;i++){
		cout<<"Nama : "<<  hasil[i]<<endl;
	}
	
	system ("pause");
	return 0;
}
