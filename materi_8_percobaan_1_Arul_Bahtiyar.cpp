#include <iostream>

using namespace std;

int hasil = 5;//Variable hasil sebagai variable global

void tampil (){
	int hasil = 10;//Variable hasil sebagai variable lokal

		cout<<"Hasil : "<<hasil<<endl;
}

int main()
{
	tampil();
	cout<<hasil<<endl;
	
	
	system("pause");
	return 0;
	
}
	
	
	
