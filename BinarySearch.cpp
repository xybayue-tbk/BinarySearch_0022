#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input(){
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array (maksimal 10) : ";
        cin >> nPanjang;

        if (nPanjang <= 10)
            break;
        else
            cout << "\nArray dapat mempunyai maksimal 10 elemen.\n";
    }
cout << "\n-------------------\n";
cout << " Masukkan elemen array \n";
cout << "-------------------\n";
}