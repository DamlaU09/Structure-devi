/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

struct kumas 
{
    string ipliktipi;
    double dm2agirlik;
    string dokumatipi;
    string renk;
    int miktar;
};

struct iskelet 
{
    string malzeme;
    string birleştirme;
    string tarz;
    string boyut;
    int miktar;
};

struct mobilya 
{
    kumas kaplama;
    iskelet malzeme;
    int fiyat;
    int adet;
};

int main() {
    const int ürünSayısı = 10;
    mobilya ürünler[ürünSayısı];
    int toplamFiyat = 0;

    
    for (int i = 0; i < ürünSayısı; i++) 
    {
        cout << "Ürün " << (i + 1) << " için bilgileri giriniz:";
        
        cout << "Kumaş iplik tipi: ";
        cin >> ürünler[i].kaplama.ipliktipi;
        cout << "Kumaş dm2 ağırlık: ";
        cin >> ürünler[i].kaplama.dm2agirlik;
        cout << "Kumaş dokuma tipi: ";
        cin >> ürünler[i].kaplama.dokumatipi;
        cout << "Kumaş renk: ";
        cin >> ürünler[i].kaplama.renk;
        cout << "Kumaş miktar: ";
        cin >> ürünler[i].kaplama.miktar;

        cout << "İskelet malzeme: ";
        cin >> ürünler[i].malzeme.malzeme;
        cout << "İskelet birleştirme: ";
        cin >> ürünler[i].malzeme.birleştirme;
        cout << "İskelet tarz: ";
        cin >> ürünler[i].malzeme.tarz;
        cout << "İskelet boyut: ";
        cin >> ürünler[i].malzeme.boyut;
        cout << "İskelet miktar: ";
        cin >> ürünler[i].malzeme.miktar;

        cout << "Fiyat: ";
        cin >> ürünler[i].fiyat;
        cout << "Adet: ";
        cin >> ürünler[i].adet;

        toplamFiyat += ürünler[i].fiyat * ürünler[i].adet;
    }


    cout << endl<<"Ürün Listesi:"<< endl;
    for (int i = 0; i < ürünSayısı; i++) 
    {
        cout << "Ürün " << (i + 1) << ": " << endl;
        cout << "Kumaş iplik tipi: " << ürünler[i].kaplama.ipliktipi << endl;
        cout << "Kumaş dm2 ağırlık: " << ürünler[i].kaplama.dm2agirlik << endl;
        cout << "Kumaş dokuma tipi: " << ürünler[i].kaplama.dokumatipi << endl;
        cout << "Kumaş renk: " << ürünler[i].kaplama.renk << endl;
        cout << "Kumaş miktar: " << ürünler[i].kaplama.miktar << endl;
        cout << "İskelet malzeme: " << ürünler[i].malzeme.malzeme << endl;
        cout << "İskelet birleştirme: " << ürünler[i].malzeme.birleştirme << endl;
        cout << "İskelet tarz: " << ürünler[i].malzeme.tarz << endl;
        cout << "İskelet boyut: " << ürünler[i].malzeme.boyut << endl;
        cout << "İskelet miktar: " << ürünler[i].malzeme.miktar << endl;
        cout << "Fiyat: " << ürünler[i].fiyat << endl;
        cout << "Adet: " << ürünler[i].adet << endl;
        cout << "-------------------------"<< endl;
    }

   
    cout << "Toplam Fiyat: " << toplamFiyat << endl;

    return 0;
}
