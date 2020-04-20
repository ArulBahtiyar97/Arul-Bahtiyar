#include<iostream>

using namespace std;

int main()
{
	int a, b;
	
	cout<<"masukkan bilangan a : ";
	cin>>a;
	
	cout<<"masukkan bilangan b : ";
	cin>>b;
	
	if(a>b){
		cout<<"bilangan a lebih besar dari bilangan b"<<endl;
	}
	
	else if(a==b){
		cout<<"bilangan a sama dengan bilangan b"<<endl;
	}
	
	else{
		cout<<"bilangan b lebih besar dari bilangan a"<<endl;
	}
	
	system("pause");
	return 0;
}
