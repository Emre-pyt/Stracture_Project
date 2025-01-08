#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;

enum Yakit {
    B, D, G, H
};

struct Otomobil {
    string marka;
    string model;
    int yil;
    float fiyat;
    float km;
    Yakit yakit;
};

int main() {
    setlocale(LC_ALL, "Turkish");
    int yakit[3];
    Otomobil binek, suv, ticari;
    int binek_ykt , suv_ykt , ticari_ykt;
    cout << "Binek Arac:\n\n";
    cout << "Marka: ";
    cin>>binek.marka;
    cout << "Model: ";
    cin>>binek.model;
    cout << "Yil: ";
    cin >> binek.yil;
    cout << "Fiyat: ";
    cin >> binek.fiyat;
    cout << "Km: ";
    cin >> binek.km;
    cout << "Yakit (0: B, 1: D, 2: G, 3: H): ";
	cin>>binek_ykt;
	switch(binek_ykt){
		case 0:
			binek.yakit=B;
	break;
		case 1:
			binek.yakit=D;
	break;
		case 2:
			binek.yakit=G;
	break;
		case 3:
			binek.yakit=H;
		
	}
	 
	cout << "\nSuv Arac:\n\n";
    cout << "Marka: ";
    cin>>suv.marka;
    cout << "Model: ";
    cin>>suv.model;
	cout << "Yil: ";
    cin >> suv.yil;
    cout << "Fiyat: ";
    cin >> suv.fiyat;
    cout << "Km: ";
    cin >> suv.km;
    cout << "Yakit (0: B, 1: D, 2: G, 3: H): ";
    cin>>suv_ykt;
    switch (suv_ykt){
    	case 0:
    		suv.yakit=B;
    break;
    	case 1:
    		suv.yakit=D;
    break;
		case 2:
			suv.yakit=G;
	break;
		case 3:
			suv.yakit=H;
	break;
	}
	cout << "\nTicari Arac:\n\n";
    cout << "Marka: ";
    cin>>ticari.marka;
	cout << "Model: ";
	cin>>ticari.model;
    cout << "Yil: ";
    cin >> ticari.yil;
    cout << "Fiyat: ";
    cin >> ticari.fiyat;
    cout << "Km: ";
    cin >> ticari.km;
    
	cout << "Yakit (0: B, 1: D, 2: G, 3: H): ";
    cin>>ticari_ykt;
    switch(ticari_ykt){
    	case 0:
    		ticari.yakit=B;
	break;
		case 1:
			ticari.yakit=D;
	break;
		case 2:
			ticari.yakit=G;
	break;
		case 3:
			ticari.yakit=H;
	break;
	}

    cout << "\nBinek Arac Bilgileri: " << binek.marka << " " << binek.model << ", Yil: " << binek.yil << ", Fiyat: " << binek.fiyat << ", Km: " << binek.km << ", Yakit: " << binek.yakit << endl << endl;
    cout << "Suv Arac Bilgileri: " << suv.marka << " " << suv.model << ", Yil: " << suv.yil << ", Fiyat: " << suv.fiyat << ", Km: " << suv.km << ", Yakit: " << suv.yakit << endl << endl;
    cout << "Ticari Arac Bilgileri: " << ticari.marka << " " << ticari.model << ", Yil: " << ticari.yil << ", Fiyat: " << ticari.fiyat << ", Km: " << ticari.km << ", Yakit: " << ticari.yakit << endl << endl;

    return 0;
}

