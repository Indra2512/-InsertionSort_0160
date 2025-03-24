#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang data 20
int n; // membuat variable inputan n

void input()
{ //Procedure Input
    while (true)
    {
        cout << "Memasukkan Jumlah Data pada Array : "; // membuat Inputan jumlah element aray
        cin >> n; //memanggil variable inputan n

        if (n <= 20)
        { // membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl; // membuat jarak per baris program
    cout << "======================" << endl; // membuat tampilan susunan data element array
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;
    
}