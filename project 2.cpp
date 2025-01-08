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
		cout << i + 1 << " . g�nderen Ad Soyad: ";
		getline(cin, teslim[i].gonderen.ad_soyad);
		cout << i + 1 << " . g�nderenin adresi: ";
		getline(cin, teslim[i].gonderen.adres);
		cout << i + 1 << " . g�nderenin telefon numaras�: ";
		cin >> teslim[i].gonderen.telefon;
	
		cout << i + 1 << "\n\n . Al�c� Ad Soyad: ";
		getline(cin, teslim[i].alan.ad_soyad);
		cout << i + 1 << " . Al�c� Adres: ";
		getline(cin, teslim[i].alan.adres);
		cout << i + 1 << " . Al�c� telefon numaras�: ";
		cin >> teslim[i].alan.telefon;
	
		cout << i + 1 << "\n\n . Kurye Ad Soyad: ";
		getline(cin, teslim[i].kurye.ad_soyad);
		cout << i + 1 << " . Kurye telefon numaras�: ";
		cin >> teslim[i].kurye.telefon;
	
		cout << i + 1 << "\n\n . �r�n g�nderi No: ";
		cin >> teslim[i].urun.gonderi_no;
		cout << i + 1 << " . �r�n A��rl�k: ";
		cin >> teslim[i].urun.agirlik;
		cout << i + 1 << " . �r�n hacim: ";
		cin >> teslim[i].urun.hacim;
		cout << i + 1 << " . �r�n garanti(e/h): ";
		cin >> teslim[i].urun.garanti;
		cout << i + 1 << " . �r�n �cret";
		cin >> teslim[i].urun.ucret;
	}

	for (int i = 0 ; i < 5 ; i++) {
		cout << i + 1 << " . g�nderen Ad Soyad: " << teslim[i].gonderen.ad_soyad << endl;
		cout << i + 1 << " . g�nderenin adresi: " << teslim[i].gonderen.adres << endl;
		cout << i + 1 << " . g�nderenin telefon numaras�: " << teslim[i].gonderen.telefon << endl;

		cout << endl << endl;

		cout << i + 1 << " . Al�c� Ad Soyad: " << teslim[i].alan.ad_soyad << endl;
		cout << i + 1 << " . Al�c� Adres: " << teslim[i].alan.adres << endl;
		cout << i + 1 << " . Al�c� telefon numaras�: " << teslim[i].alan.telefon << endl;

		cout << endl << endl;

		cout << i + 1 << " . Kurye Ad Soyad: " << teslim[i].kurye.ad_soyad << endl;
		cout << i + 1 << " . Kurye telefon numaras�: " << teslim[i].kurye.telefon << endl;

		cout << endl << endl;

		cout << i + 1 << " . �r�n g�nderi No: " << teslim[i].urun.gonderi_no << endl;
		cout << i + 1 << " . �r�n A��rl�k: " << teslim[i].urun.agirlik << endl;
		cout << i + 1 << " . �r�n hacim: " << teslim[i].urun.hacim << endl;
		cout << i + 1 << " . �r�n garanti(e/h): " << teslim[i].urun.garanti << endl;
		cout << i + 1 << " . �r�n �cret: " << teslim[i].urun.ucret << endl;
	}

	return 0;
}
return 0;
}
