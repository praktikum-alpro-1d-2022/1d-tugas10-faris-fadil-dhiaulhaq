#include <iostream>
using namespace std;



int main()
{

    int baris, spasi, i, j; 
    char pilihan;

    cout << "Silahkan Pilih Segitiga" << endl;
    cout << "1. Segitiga Biasa" << endl;
    cout << "2. Segitiga Biasa Terbalik" << endl;
    cout << "3. Segitiga Siku-siku" << endl;
    cout << "4. Segitiga Siku-siku Terbalik" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    switch (pilihan)
    {
    case '1':

        cout <<"Masukan Jumlah Baris: ";
        cin >> baris;

        for(int i = 1, k = 0; i <= baris; ++i, k = 0)
        {
            for(spasi = 1; spasi <= baris-i; ++spasi)
            {
                cout <<"  ";
            }

            while(k != 2*i-1)
            {
                cout << "* ";
                ++k;
            }
            cout << endl;
        }
        break;
    case '2':
        
        cout << "Masukkan jumlah baris: ";
        cin >> baris;
        for (i = baris; i >= 1; i--)
        {
            for (spasi = i; spasi < baris; spasi++)
                cout << " ";
            for (j = 1; j <= i; j++)
                cout << "* ";
            cout << "\n";
        }
        break;

    case '3':

        cout << "Segitiga Bintang Siku Siku\n";
        cout << "Masukkan jumlah baris:  ";
        cin >> baris;
        for (i = 1; i <= baris; i++)
        {
            for (j = 1; j <= i; j++)
            {
            cout << "* ";
            }
            cout << "\n";
        }
        break;

    case '4':

        cout << "Segitiga Bintang Siku Siku Terbalik\n";
        cout << "Masukkan jumlah baris:  ";
        cin >> baris;
        for (i = baris; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
            cout << "* ";
            }
            cout << "\n";
        }
        break;
        
    default:

        cout << "Pilihan tidak tersedia" << endl;
        break;
    }
    return 0;
}