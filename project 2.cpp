#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;
struct Gonderen {
	string ad_soyad;
	string adres;
	int telefon;

};
struct Alici {
	string ad_soyad;
	string adres;
	int telefon;
};
struct Kurye {
	string ad_soyad;
	int telefon;
};
struct Gonderi {
	int gonderi_no;
	int agirlik;
	int hacim;
	char garanti;
	int ucret;

};
struct Teslimat {
	Gonderen gonderen;
	Alici alan;
	Kurye kurye;
	Gonderi urun;
};
int main() {
	setlocale(LC_ALL, "Turkish");
	Teslimat teslim[5];
	for (int i = 0 ; i < 5 ; i++) {
		cout << i + 1 << " . gönderen Ad Soyad: ";
		getline(cin, teslim[i].gonderen.ad_soyad);
		cout << i + 1 << " . gönderenin adresi: ";
		getline(cin, teslim[i].gonderen.adres);
		cout << i + 1 << " . gönderenin telefon numarası: ";
		cin >> teslim[i].gonderen.telefon;
	
		cout << i + 1 << "\n\n . Alıcı Ad Soyad: ";
		getline(cin, teslim[i].alan.ad_soyad);
		cout << i + 1 << " . Alıcı Adres: ";
		getline(cin, teslim[i].alan.adres);
		cout << i + 1 << " . Alıcı telefon numarası: ";
		cin >> teslim[i].alan.telefon;
	
		cout << i + 1 << "\n\n . Kurye Ad Soyad: ";
		getline(cin, teslim[i].kurye.ad_soyad);
		cout << i + 1 << " . Kurye telefon numarası: ";
		cin >> teslim[i].kurye.telefon;
	
		cout << i + 1 << "\n\n . Ürün gönderi No: ";
		cin >> teslim[i].urun.gonderi_no;
		cout << i + 1 << " . Ürün Ağırlık: ";
		cin >> teslim[i].urun.agirlik;
		cout << i + 1 << " . Ürün hacim: ";
		cin >> teslim[i].urun.hacim;
		cout << i + 1 << " . Ürün garanti(e/h): ";
		cin >> teslim[i].urun.garanti;
		cout << i + 1 << " . Ürün ücret";
		cin >> teslim[i].urun.ucret;
	}

	for (int i = 0 ; i < 5 ; i++) {
		cout << i + 1 << " . gönderen Ad Soyad: " << teslim[i].gonderen.ad_soyad << endl;
		cout << i + 1 << " . gönderenin adresi: " << teslim[i].gonderen.adres << endl;
		cout << i + 1 << " . gönderenin telefon numarası: " << teslim[i].gonderen.telefon << endl;

		cout << endl << endl;

		cout << i + 1 << " . Alıcı Ad Soyad: " << teslim[i].alan.ad_soyad << endl;
		cout << i + 1 << " . Alıcı Adres: " << teslim[i].alan.adres << endl;
		cout << i + 1 << " . Alıcı telefon numarası: " << teslim[i].alan.telefon << endl;

		cout << endl << endl;

		cout << i + 1 << " . Kurye Ad Soyad: " << teslim[i].kurye.ad_soyad << endl;
		cout << i + 1 << " . Kurye telefon numarası: " << teslim[i].kurye.telefon << endl;

		cout << endl << endl;

		cout << i + 1 << " . Ürün gönderi No: " << teslim[i].urun.gonderi_no << endl;
		cout << i + 1 << " . Ürün Ağırlık: " << teslim[i].urun.agirlik << endl;
		cout << i + 1 << " . Ürün hacim: " << teslim[i].urun.hacim << endl;
		cout << i + 1 << " . Ürün garanti(e/h): " << teslim[i].urun.garanti << endl;
		cout << i + 1 << " . Ürün ücret: " << teslim[i].urun.ucret << endl;
	}

	return 0;
}
return 0;
}
