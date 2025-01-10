/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

struct otomobil 
{
    string marka;
    string model;
    int yil;
    char yakit; 
    int km;
    float fiyat;
};

int main() 
{
    otomobil binek;
    otomobil suv;
    otomobil ticari;

    // Binek otomobil 
    cout << "Binek otomobil bilgilerini girin:" << endl;
    cout << "Marka: ";
    cin >> binek.marka;
    cout << "Model: ";
    cin >> binek.model;
    cout << "Yıl: ";
    cin >> binek.yil;
    cout << "Yakıt (B/D/G/H): ";
    cin >> binek.yakit;
    cout << "KM: ";
    cin >> binek.km;
    cout << "Fiyat: ";
    cin >> binek.fiyat;

    // SUV otomobil 
    cout << "\nSUV otomobil bilgilerini girin:" << endl;
    cout << "Marka: ";
    cin >> suv.marka;
    cout << "Model: ";
    cin >> suv.model;
    cout << "Yıl: ";
    cin >> suv.yil;
    cout << "Yakıt (B/D/G/H): ";
    cin >> suv.yakit;
    cout << "KM: ";
    cin >> suv.km;
    cout << "Fiyat: ";
    cin >> suv.fiyat;

    // Ticari otomobil 
    cout << "\nTicari otomobil bilgilerini girin:" << endl;
    cout << "Marka: ";
    cin >> ticari.marka;
    cout << "Model: ";
    cin >> ticari.model;
    cout << "Yıl: ";
    cin >> ticari.yil;
    cout << "Yakıt (B/D/G/H): ";
    cin >> ticari.yakit;
    cout << "KM: ";
    cin >> ticari.km;
    cout << "Fiyat: ";
    cin >> ticari.fiyat;

    
    cout << "\nBinek Otomobil Bilgileri:" << endl;
    cout << "Marka: " << binek.marka << ", Model: " << binek.model << ", Yıl: " << binek.yil 
         << ", Yakıt: " << binek.yakit << ", KM: " << binek.km << ", Fiyat: " << binek.fiyat << endl;

    cout << "\nSUV Otomobil Bilgileri:" << endl;
    cout << "Marka: " << suv.marka << ", Model: " << suv.model << ", Yıl: " << suv.yil 
         << ", Yakıt: " << suv.yakit << ", KM: " << suv.km << ", Fiyat: " << suv.fiyat << endl;

    cout << "\nTicari Otomobil Bilgileri:" << endl;
    cout << "Marka: " << ticari.marka << ", Model: " << ticari.model << ", Yıl: " << ticari.yil 
         << ", Yakıt: " << ticari.yakit << ", KM: " << ticari.km << ", Fiyat: " << ticari.fiyat << endl;

    return 0;
}
