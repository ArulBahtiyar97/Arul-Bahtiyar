#include <iostream>

using namespace std;
int main()
{
	 int angka;
        cout<<"Menu Chanel TV"<<endl;
        cout<<"1.Indosiar"<<endl;
        cout<<"2.RCTI"<<endl;
		cout<<"3.SCTV"<<endl;
		cout<<"4.Trans 7"<<endl;
		cout<<"5.Trans TV"<<endl;
		cout<<"6.TV One"<<endl;
		cout<<"7.RCTI"<<endl;
		cout<<"8.Kompas TV"<<endl;
        cout<<"Masukkan Pilihan Anda : ";
        cin>>angka;
       
        if (angka==1){
        cout<<"Chanel yang akan diputar Indosiar "<<endl;
        }
        else if (angka==2){
        cout<<"Chanel yang akan diputar RCTI "<<endl;
        }
		else if (angka==3){
        cout<<"Chanel yang akan diputar SCTV "<<endl;
        }
		else if (angka==4){
        cout<<"Chanel yang akan diputar Trans 7 "<<endl;
        }
		else if (angka==5){
        cout<<"Chanel yang akan diputar Trans TV "<<endl;
        }
		else if (angka==6){
        cout<<"Chanel yang akan diputar TV One "<<endl;
        }
		else if (angka==7){
        cout<<"Chanel yang akan diputar RCTI"<<endl;
        }
		else if (angka==8){
        cout<<"Chanel yang akan diputar Kompas TV"<<endl;
        }
        else{
        cout<<"Pilihan yang anda masukkan salah"<<endl;
        
		}
       
	

	system("pause");
	return 0;
}

