#include <iostream>
using namespace std;

double luasPersegi (int sisiPersegi)
{
    return (sisiPersegi * sisiPersegi);
}

double luasPersegiPanjang (int panjangPersegiPanjang, int lebarPersegiPanjang)
{
    return (panjangPersegiPanjang * lebarPersegiPanjang);
}

double luasSegitiga (int alasSegitiga, int tinggiSegitiga)
{
    return (0.5 * alasSegitiga * tinggiSegitiga);
}

double luasJajarGenjang (int alasJajarGenjang, int tinggiJajarGenjang)
{
    return (alasJajarGenjang * tinggiJajarGenjang);
}

double luasTrapesium (int a, int b, int tinggiTrapesium)
{
    return (0.5 * (a + b) * tinggiTrapesium);
}

void menuProgramBangunDatar()
{   
    short userInput;
    bool kembaliKeMenu = true;

    while (kembaliKeMenu)
    {    
    cout << "\nLuas Bangun Datar:" << endl
         << "(1) Persegi." << endl
         << "(2) Persegi Panjang." << endl
         << "(3) Segitiga." << endl
         << "(4) Jajar Genjang." << endl
         << "(5) Trapesium." << endl
         << "(6) Kembali Ke Menu Utama." << endl
         << "Input: ";
        cin >> userInput;
        
        switch (userInput)
        {
        case 1:
            double sisiPersegi;
            cout << "\nLuas Persegi" << endl
                 << "Input Sisi: ";
            cin >> sisiPersegi;
            cout << "--------------------" << endl 
                 << "Luas Persegi : " << luasPersegi(sisiPersegi) 
                 << endl; 
            break;
        
        case 2:
            double lebarPersegiPanjang;
            double panjangPersegiPanjang;
            cout << "\nLuas Persegi Panjang" << endl
                 << "Input Panjang: ";
            cin >> panjangPersegiPanjang;
            cout << "Input Lebar: ";
            cin >> lebarPersegiPanjang; 
            cout << "--------------------" << endl 
                 << "Luas Persegi Panjang : " << luasPersegiPanjang(panjangPersegiPanjang, lebarPersegiPanjang) 
                 << endl;
            break;
        
        case 3:
            double alasSegitiga;
            double tinggiSegitiga;
            cout << "\nLuas Segitiga" << endl
                 << "Input Alas: ";
            cin >> alasSegitiga;
            cout << "Input tinggi: ";
            cin >> tinggiSegitiga; 
            cout << "--------------------" << endl 
                 << "Luas Segitiga : " << luasSegitiga(alasSegitiga, tinggiSegitiga)
                 << endl;
            break;
        case 4: 
            double alasJajarGenjang;
            double tinggiJajarGenjang;
            cout << "\nLuas Jajar Genjang" << endl
                 << "Input Alas: ";
            cin >> alasJajarGenjang;
            cout << "Input tinggi: ";
            cin >> tinggiJajarGenjang; 
            cout << "--------------------" << endl 
                 << "Luas Jajar Genjang : " << luasJajarGenjang(alasJajarGenjang, tinggiJajarGenjang)
                 << endl;
            break;
        case 5:
            double a;
            double b;
            double tinggiTrapesium;
            cout << "\nLuas Trapesium" << endl
                 << "Input Sisi 'a': ";
            cin >> a;
            cout << "Input Sisi 'b': ";
            cin >> b;
            cout << "Input Tinggi: ";
            cin >> tinggiTrapesium;
            cout << "--------------------" << endl 
                 << "Luas Trapesium : " << luasTrapesium(a, b, tinggiTrapesium)
                 << endl;
            break;
        case 6:
            kembaliKeMenu = false;
            cout << endl;
            break;
        default:
            cout << "Input Salah!" << endl;
            break;
        }
    }
}