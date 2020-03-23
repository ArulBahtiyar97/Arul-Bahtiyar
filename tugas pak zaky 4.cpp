#include <iostream>

using namespace std;
int main()
{
	int umur ;
	cout<< "umur kamu berapa ? ";
	cin>> umur;
	
	if (umur >=17)
	    	cout<< " YA , kamu boleh membuat E-KTP ! :)"<<endl;
	else
		cout<< " Tidak , kamu belum boleh membuat E-KTP !"<<endl;

	system("pause");
	return 0;
}
