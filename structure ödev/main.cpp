/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;


class Kisi
{
public:
    string ad_soyad;
    string adres;
    string telefon_no;

    Kisi(string ad_soyad, string adres, string telefon_no)
        : ad_soyad(ad_soyad), adres(adres), telefon_no(telefon_no) {}

    void yazdir() 
    {
        cout << "Adı Soyadı: " << ad_soyad << endl;
        cout << "Adres: " << adres << endl;
        cout << "Telefon No: " << telefon_no << endl;
    }
};


class Gonderi {
public:
    string gonderi_no;
    float agirlik;
    float hacim;
    bool garanti;
    float ucret;

    Gonderi(string gonderi_no, float agirlik, float hacim, bool garanti)
        : gonderi_no(gonderi_no), agirlik(agirlik), hacim(hacim), garanti(garanti) {
        ucret = agirlik * 10;
    }

    void yazdir() const {
        cout << "Gönderi No: " << gonderi_no << endl;
        cout << "Ağırlık: " << agirlik << " kg" << endl;
        cout << "Hacim: " << hacim << " m^3" << endl;
        cout << "Garanti: " << (garanti ? "Evet" : "Hayır") << endl;
        cout << "Ücret: " << ucret << " TL" << endl;
    }
};

class Kurye {
public:
    string ad_soyad;
    string telefon_no;

    Kurye(string ad_soyad, string telefon_no)
        : ad_soyad(ad_soyad), telefon_no(telefon_no) {}

    void yazdir() 
    {
        cout << "Kurye Adı Soyadı: " << ad_soyad << endl;
        cout << "Telefon No: " << telefon_no << endl;
    }
};


class Teslimat {
public:
    Gonderi gonderi;
    Kisi gonderen;
    Kisi alici;
    Kurye kurye;

    Teslimat(Gonderi gonderi, Kisi gonderen, Kisi alici, Kurye kurye)
        : gonderi(gonderi), gonderen(gonderen), alici(alici), kurye(kurye) {}

    void teslimat_sureci() {
        cout << "\n--- Gönderi Bilgileri ---" << endl;
        gonderi.yazdir();
        cout << "\n--- Gönderen Bilgileri ---" << endl;
        gonderen.yazdir();
        cout << "\n--- Alıcı Bilgileri ---" << endl;
        alici.yazdir();
        cout << "\n--- Kurye Bilgileri ---" << endl;
        kurye.yazdir();
        cout << "\n--- Teslimat Başlatıldı ---" << endl;
    }
};

int main() {
    
    Kisi gonderen1("Doğa Aydın", "İstanbul, Kadıköy, Caddesi No: 5", "0532xxxxxx");
    Kisi alici1("Uzay Yılmaz", "Ankara, Çankaya, Sokak No: 10", "0312xxxxxx");
    Kisi gonderen2("Kumsal Doğan", "Bursa, Osmangazi, Mahalle No: 8", "0224xxxxxx");
    Kisi alici2("Vehbi Çetin", "İzmir, Konak, Caddesi No: 20", "0232xxxxxx");
    Kisi gonderen3("Buse Yıldız", "Adana, Seyhan, Sokak No: 15", "0322xxxxxx");
    Kisi alici3("Sedef Kaya", "Antalya, Muratpaşa, Mahalle No: 30", "0242xxxxxx");
    Kisi gonderen4("Damla Uysal", "Kocaeli, Gebze, Cadde No: 45", "0262xxxxxx");
    Kisi alici4("Baha Çelik", "Eskişehir, Tepebaşı, Sokak No: 60", "0222xxxxxx");
    Kisi gonderen5("Ece Erdem", "Trabzon, Ortahisar, Caddesi No: 80", "0462xxxxxx");
    Kisi alici5("Gökhan Şahin", "Samsun, Atakum, Mahalle No: 100", "0362xxxxxx");

    // Gönderi bilgileri
    Gonderi gonderi1("G001", 5.0, 0.02, true);
    Gonderi gonderi2("G002", 3.2, 0.015, false); 
    Gonderi gonderi3("G003", 8.5, 0.03, true); 
    Gonderi gonderi4("G004", 2.0, 0.01, false); 
    Gonderi gonderi5("G005", 7.0, 0.025, true); 

    // Kurye bilgileri
    Kurye kurye1("Ege Bora", "0551xxxxxx");
    Kurye kurye2("Hüseyin Can", "0552xxxxxx");
    Kurye kurye3("Ahmet Emin", "0553xxxxxx");
    Kurye kurye4("Emir Aydın", "0554xxxxxx");
    Kurye kurye5("Selim Kaya", "0555xxxxxx");

   
    Teslimat teslimat1(gonderi1, gonderen1, alici1, kurye1);
    Teslimat teslimat2(gonderi2, gonderen2, alici2, kurye2);
    Teslimat teslimat3(gonderi3, gonderen3, alici3, kurye3);
    Teslimat teslimat4(gonderi4, gonderen4, alici4, kurye4);
    Teslimat teslimat5(gonderi5, gonderen5, alici5, kurye5);

   
    teslimat1.teslimat_sureci();
    cout << "\n====================================\n";
    teslimat2.teslimat_sureci();
    cout << "\n====================================\n";
    teslimat3.teslimat_sureci();
    cout << "\n====================================\n";
    teslimat4.teslimat_sureci();
    cout <<"\n====================================\n";
    teslimat5.teslimat_sureci();
    
    return 0;
}
