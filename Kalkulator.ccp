#include <iostream>
#include <stdlib.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int bil1, bil2, pil;
    char lagi;
    
    a:cout << "\t\t _____________________________" << endl;
    cout << "\t\t#         KALKULATOR          #" << endl;
    cout << "\t\t# By: Ridwan Wiki Saputro.    #" << endl;
    cout << "\t\t# Tugas: Buat kalkulator C++  #" << endl;
    cout << "\t\t# No/Kelas: 19/X RPL 2.       #" << endl;
    cout << "\t\t ############################# " << endl << endl;
    cout << "\n\n\n\n";
    
    
    cout << "Masukkan angka pertama: ";
    cin >> bil1;
    cout << "Masukkan angka ke-2: ";
    cin >> bil2;
    
    
    cout << "Silahkan pilih operasi!: " << endl;
    cout << "1. Penjumlahan (+)" << endl;
    cout << "2. Pengurangan (-)" << endl;
    cout << "3. Perkalian (*)" << endl;
    cout << "4. Pembagian (/)" << endl;
    cout << "5. Persentase (*)" << endl;
    cout << "Pilih [1-5]: ";
    cin >> pil;
    
    
    if(pil==1)
    {
      int hasil = bil1 + bil2;
      cout << "Hasil penjumlahan dari " << bil1 << "+ " << bil2 << "= " << hasil << endl;
    }
    else if(pil==2)
    {
      int hasil = bil1 - bil2;
      cout << "Hasil pengurangan dari ";
      cout << bil1 << "-" << bil2 << "=" << hasil << endl;      
    }
    else if(pil==3)
    {
      int hasil = bil1 * bil2;
      cout << "Hasil perkalian dari " << bil1;
      cout << "*" << bil2 << "=" << hasil << endl;
    }
    else if(pil==4)
    {
      int hasil = bil1 / bil2;
      cout << "Hasil pembagian dari ";
      cout << bil1 << "/" << bil2 << "=" << hasil << endl;
    }
    else if(pil==5)
    {
      int hasil = bil1 % bil2;
      cout << "Hasil persentase dari ";
      cout << bil1 << "%" << bil2 << "=" << hasil << endl;
    }
    else
    {
    cout << "Anda memasukkan input yang salah!";

    }
    
    
    cout << "Hitung lagi? [y/n]: ";
    //tring lagi;
    cin >> lagi;b:
      
      if(lagi == 'y'){
        system("cls");
        goto a;
      } else {
          system("cls");
      }
    
    
    
    return 0;
}