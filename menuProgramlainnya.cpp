#include <iostream>
#include <iomanip>
#include <cstring>
#include "function.h"
using namespace std;

void reverseString(char *str) 
{
    char *ptr1 = str;                     
    char *ptr2 = str + strlen(str) - 1;   

    while (ptr1 < ptr2) {
        char temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1++;
        ptr2--;
    }
}
void pointer()
{   
    char mystring[] = "manish";
    cout << "Original string: " << mystring << endl;

    reverseString(mystring);

    cout << "Reversed string: " << mystring << endl;
}

void memoryAllocation()
{
    int M, N;
    cout << "Masukkan jumlah baris (M): ";
    cin >> M;
    cout << "Masukkan jumlah kolom (N): ";
    cin >> N;

    int** arr = new int*[M];
    for (int i = 0; i < M; i++) {
        arr[i] = new int[N];
    }

    int top = 0, bottom = M - 1, left = 0, right = N - 1;
    int value = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            arr[top][i] = value++;
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            arr[i][right] = value++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                arr[bottom][i] = value++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                arr[i][left] = value++;
            }
            left++;
        }
    }

    cout << "Array dalam bentuk spiral:" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < M; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

void pointerAndArray()
{
    int M;
    int N;

    cout << "Masukkan jumlah baris (M): ";
    cin >> M;
    cout << "Masukkan jumlah kolom (N): ";
    cin >> N;

    int** array = new int*[M];  
    for (int i = 0; i < M; ++i) {
        array[i] = new int[N];  
    }

    cout << "Masukkan elemen array:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Elemen [" << i << "][" << j << "]: ";
            cin >> *(*(array + i) + j); 
        }
    }

    cout << "\nIsi array adalah:" << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << *(*(array + i) + j) << " "; 
        }
        cout << endl;
    }

    for (int i = 0; i < M; ++i) {
        delete[] array[i];  
    }
    delete[] array;
}

void menuProgramLainnya()
{   
    short userInput;
    bool kembaliKeMenu = true;

    while(kembaliKeMenu)
    {
        cout << "\nProgram Lainnya" << endl
            << "(1) Program Array." << endl
            << "(2) Program Pointer." << endl
            << "(3) Program Memory Allocation." << endl
            << "(4) Program Pointer and 2d Array." << endl
            << "(5) Kembali Ke Menu Utama." << endl
            << "Input: "; 
        cin >> userInput;

        switch (userInput)
        {
        case 1:
            menuProgramArray();
            break;
        case 2:
            cout << endl;
            memoryAllocation();
            break;
        case 3:
            cout << endl;
            pointerAndArray();
            break;
        case 4:
            cout << endl;
            pointer();
            break;
        case 5:
            kembaliKeMenu = false;
            cout << endl;
            break;  
        default:
            cout << "Input Salah!" << endl;
            break;
        }
    }
}