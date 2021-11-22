#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int alas,tinggi,p,sisia,sisib,sisic;
	double luas,keliling;
	char ulang;
  do{
  
	
	cout<<"  --Pilih-- "<<endl;
  cout<<"-- Tekan Angka Pada Keyboard --"<<endl<<endl;
  cout <<"PROGRAM MENGHITUNG LUAS DAN KELILING SEGITIGA"<<endl;
  cout<<"  1. Mencari Luas"<<endl;
  cout<<"  2. Mencari keliling"<<endl;
  cout<<"  0. Exit"<<endl<<endl;
  cout<<"Masukan nilai: ";
  cin>>p;	
  system("cls");
  
	 switch(p){	
	case 0: //exit
        cout<<"Terimakasih sudah mengguanakan aplikasi ini !!";
        getch();
		break;	
		
		case 1:
	cout <<"Masukan alas = ";
	cin>>alas;
	cout<<"Masukan tinggi = ";
	cin>>tinggi;

	luas=0.5*alas*tinggi;

	cout<<"Hasil luas segitiga = "<<luas<<endl;
getch();
break;
 
 	case 2:
 		cout <<"Masukan sisi a = ";
	cin>>sisia;
	cout<<"Masukan sisi b = ";
	cin>>sisib;
	cout<<"Masukan sisi c = ";
	cin>>sisic;

	keliling=sisia+sisib+sisic;
	cout<<"Hasil keliling segitiga = "<<keliling<<endl;
	getch();
	break;
 	}
 	
 	cout << endl;
   system("cls");
    cout << "Ingin memilih menu lain (y/t)? ";
    cin >> ulang;
    cout << endl;
    system("cls");
	} 
while (ulang != 't');
  cout << "Terimakasih";
  cout << endl;
return 0;	
}
