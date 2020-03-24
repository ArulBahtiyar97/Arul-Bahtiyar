#include <iostream>

using namespace std;
int main()
{
	int bil ;
	
	cout<< "masukkan sebuah bilangan ";
	cin>> bil;
	
	if (bil >=0)
	    cout<< "adalah bilangan POSITIF"<<endl;
	else
		cout<< "adalah bilangan NEGATIF"<<endl;
	
	system("pause");
	return 0;
}
