#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Buku
{
    char kode[20], tahun[4], harga[10],nama [50], pengarang[50];

};
Buku book[10];
int y,z;



void Input()
{

    cout << "Masukan Jumlah Buku : ";
    cin >>y;
    for (z=0;z<y;z++)
    {
        cout << "Buku ke-"<<z+1<<endl<<endl;
        cout << "Kode Buku\t: ";
        cin >> book[z].kode;
        cout << "Nama Buku\t: ";
        cin >> book[z].nama;
        cout << "Tahun Terbit\t: ";
        cin >> book[z].tahun;
        cout << "Nama Pengarang\t: ";
        cin >> book[z].pengarang;
        cout << "Harga\t\t: ";
        cin >> book[z].harga;
    }
    system("cls");
}

void Show ()
{
    cout << "Kode\tNama Buku\tTahun\tPengarang\tHarga\t"<<endl<<endl;

    for (z=0;z<y;z++)
    {
        cout << z;
        cout << book[z].kode<<"\t"<<book[z].nama<<"\t"<<book[z].tahun<<"\t"<<book[z].pengarang<<"\t"<<book[z].harga<<endl;
    }
}

void Delete ()
{
    int k,l;
    cout << "Hapus Data Buku ke-";
    cin >> k;
    k=k-1;
    z--;
    for (l=k;l<z;l++)
    {
        book[z]=book[z-1];
    }
    y=y-1;
    cout << "\t\t\tData Buku Berhasil Dihapus"<<endl;
    getch();system("cls");

}

void Edit()
{
    int k;
    cout << "Edit Data Buku ke-";
    cin >> k;
    k=k-1;
    cout << "Kode Buku\t: ";
    cin >> book[k].kode;
    cout << "Nama Buku\t: ";
    cin >> book[k].nama;
    cout << "Tahun Terbit\t: ";
    cin >> book[k].tahun;
    cout << "Nama Pengarang\t: ";
    cin >> book[k].pengarang;
    cout << "Harga\t\t: ";
    cin >> book[k].harga;
    Show();
    system("cls");

}

int main()
{
    int pilihan;

    while (pilihan!=99)
    {
        cout << "1. Masukan Data Buku"<<endl;
        cout << "2. Hapus Data Buku"<<endl;
        cout << "3. Edit Data Buku "<<endl;
        cout << "4. Tampilkan Data Buku"<<endl;
        cout << "0. Keluar"<<endl<<endl;
        cout << "Masukan Pilihan : ";
        cin >> pilihan;
        system("cls");

        if (pilihan == 1)
        {
            Input();
        }

        else if (pilihan == 2)
        {
            Delete();
        }

        else if (pilihan == 3)
        {
            Edit();
        }

        else if (pilihan == 4)
        {
            Show();
        }

        else if (pilihan == 99)
        {
            return 0;
        }

        else
        {
            cout << "Pilihan Tidak ada!";
        }
    }

}


