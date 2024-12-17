#include <iostream>
using namespace std;

void elemenTerbesar()
{
    int arr[] = {1, 4, 2, 5, 13, 39, 3};

    int terbesar = arr[0]; 
    for (int i = 1; i < 7; i++) {
        if (arr[i] > terbesar) {
            terbesar = arr[i];
        }
    }

    cout << terbesar;
}

void elemenPertamaDanTerakhir()
{
    int arr[] = {1, 4, 2, 5, 13, 39, 3};

    cout << arr[0] << " dan " << arr[6];
}

void elemenAsceding()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
}

void elemenGanjilGenap()
{
    int arr[] = {1, 4, 2, 5, 13, 39, 3};

    for(int i = 0; i < 8; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cout << arr[i] << " = genap"<< endl;
        }
        else
        {
            
            cout << arr[i] << " = ganjil"<< endl;
        }
    }
}

void insertlemen()
{
    int arr_size = 0;
    int i = 0;

    cout << "Enter array size :: ";
    cin >> arr_size;

    int arr[arr_size];

    cout << "Enter array elements :: " << endl;
    for(int i = 0; i < arr_size; i++)
    {
        cout << "Enter arr[" << i << "1] element :: ";
        cin >> arr[i];
    }

    cout << "Stored data in array :: " << endl;
    for(int i = 0; i < arr_size; i++)
    {   
        cout << arr[i] << " ";
    }
    cout<< endl;

    cout << "Enter position to insert number :: ";
    cin >> i;
    
    cout << "Enter number to be inserted :: ";
    cin >> arr[i];

    cout << "New array is :: ";
    for(int i = 0; i < arr_size; i++)
    {   
        cout << arr[i] << " ";
    }
}

void menuProgramArray()
{
    short userInput;
    bool kembaliKeMenu = true;

    while (kembaliKeMenu)
    {
        cout << "\nProgram Array" << endl
            << "(1) Program Menemukan Elemen Terbesar." << endl
            << "(2) Program Menampilkan Elemen Pertama dan Terakhir." << endl
            << "(3) Program Mengurutkan Elemen dalam urutan Ascending." << endl
            << "(4) Program Mengurutkan Angka Genap dan Ganjil." << endl
            << "(5) Program Insert Elemen dalam posisi tertentu." << endl
            << "(6) Kembali Ke Menu Program Lainnya." << endl
            << "Input: ";
        cin >> userInput;

        switch (userInput)
        {
        case 1:
            cout << endl;
            elemenTerbesar();
            break;
        case 2:
            cout << endl;
            elemenPertamaDanTerakhir();
            break;
        case 3:
            cout << endl;
            elemenAsceding();
            break;
        case 4:
            cout << endl;
            elemenGanjilGenap();
            break;
        case 5:
            cout << endl;
            insertlemen();
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
