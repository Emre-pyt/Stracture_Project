#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;

struct Kumas{
	string ipliktipi;
	float dm2agirlik;
	string renk;
	float miktar;
	
};

struct Iskelet{
	string malzeme;
	string birlestirme;
	string tarz;
	float boyut;
	int miktar;
};

struct Mobilya{
Iskelet malzeme;
Kumas kaplama;
int fiyat;
int adet;

};
int main(){
setlocale(LC_ALL,"Turkish");
Mobilya mobilya[10];
for(int i=0;i<10;i++){

	cout<<i+1<<" . kumaþ:"<<endl<<endl;
	cout<<"kumaþýn iplik tipi: ";
	cin>>mobilya[i].kaplama.ipliktipi;
	cout<<"Kumaþýn dm2 aðýrlýðý: ";
	cin>>mobilya[i].kaplama.dm2agirlik;
	cout<<"kumaþýn rengi: ";
	cin>>mobilya[i].kaplama.renk;
	cout<<"kumaþýn miktarý: ";
	cin>>mobilya[i].kaplama.miktar;

cout<<endl<<endl;

	cout<<i+1<<" . iskelet:"<<endl<<endl;
	cout<<"iskeletin malzemesi: ";
	cin>>mobilya[i].malzeme.malzeme;
	cout<<"birleþtirme: ";
	cin>>mobilya[i].malzeme.birlestirme;
	cout<<"Tarz: ";
	cin>>mobilya[i].malzeme.tarz;
	cout<<"boyut: ";
	cin>>mobilya[i].malzeme.boyut;
	cout<<"miktar: ";
	cin>>mobilya[i].malzeme.miktar;
	
	cout<<endl<<endl;
	
	cout<<"fiyat: ";
	cin>>mobilya[i].fiyat;
	cout<<"adet: ";
	cin>>mobilya[i].adet;
	cout<<endl<<endl;
}
for(int i=0;i<10;i++){
	cout<<i+1<<" . mobilya bilgileri:"<<endl<<endl;
	cout<<"kumaþýn iplik tipi: "<<mobilya[i].kaplama.ipliktipi<<endl;
	cout<<"Kumaþýn dm2 aðýrlýðý: "<<mobilya[i].kaplama.dm2agirlik<<endl;
	cout<<"kumaþýn rengi: "<<mobilya[i].kaplama.renk<<endl;
	cout<<"kumaþýn miktarý: "<<mobilya[i].kaplama.miktar<<endl;
	cout<<"iskeletin malzemesi: "<<mobilya[i].malzeme.malzeme<<endl;
	cout<<"iskeletin birleþtirmesi: "<<mobilya[i].malzeme.birlestirme<<endl;
	cout<<"iskeletin tarzý: "<<mobilya[i].malzeme.tarz<<endl;
	cout<<"iskeletin boyutu: "<<mobilya[i].malzeme.boyut<<endl;
	cout<<"iskeletin miktarý: "<<mobilya[i].malzeme.miktar;

	cout<<endl<<endl<<endl;
	
	cout<<"Toplam fiyat: "<<mobilya[i].fiyat*mobilya[i].adet<<"tl";
	
}
	return 0;
}
