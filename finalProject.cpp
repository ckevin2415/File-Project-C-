#include <iostream>
#include <iomanip>
#include "function.h"
using namespace std;

int main()
{   
    short userInput;
    bool programUtama = true;

    while (programUtama)
    {
        cout << "Halo, ada yang bisa saya bantu?" << endl
            << "(1) untuk menghitung luas bangun datar." << endl
            << "(2) untuk program lainnya." << endl
            << "(3) untuk exit." << endl
            << "Input: ";
        cin >> userInput;

        switch (userInput)
        {
        case 1:
            menuProgramBangunDatar();
            break;
        case 2:
            menuProgramLainnya();
            break;
        case 3:
            cout << "\nTerima kasih, Semoga bisa membantu.";
            programUtama = false;
            break;
        default:
            cout << "Input Salah!" << endl << endl;
            break;
        }
    }
    
    return 0;
}