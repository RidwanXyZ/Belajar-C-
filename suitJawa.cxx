/*
Program dibuat oleh Ridwan
Belajar membuat program C++ sederhana
*/

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;
int main(){
    system("color 9e");
    //pilih player
    int lagi, terpilih;
    a:cout << "TUGAS X RPL 2\n\nMEMBUAT GAME SEDERHANA\nNama: Ridwan W S\n\n\nSELAMAT DATANG DI GAME SUIT JAWA\n" << endl << endl;
    cout << "Pilih pak, ketik angkanya" << endl;
    cout << "1. Gajah\n2. Semut\n3. Orang" << "\n\n\nPilih?: ";
    cin >> terpilih;
    /*
    Disini jika terpilih 1, maka
    eksekusi
    */
    if(terpilih==1){
        cout << endl << "Kamy memilih GAJAH" << endl;
        srand(time(NULL)); //PILIHAN KOMPUTER/BOT
        int com = rand() % 10;
        if (com <=3 && com >=1){
            cout << "Bot adalah= GAJAH \n\nYAH SERI COK WKWK";
        } else if (com<=6 && com>=4){
            cout << "Bot adalah= ORANG\n\nKamu Menang!! Yeayyyy";
        } else {
           cout << "Bot adalah= SEMUT\n\n\nLu kalah ekekkwkekekk";
        } cout << endl;
    }
    //penutup 1
    
    //pembuka 2
    else if(terpilih==2)
    {
        cout << "Kamu memilih SEMUT\n\n";
        int com = rand() % 10;
        //Komputer semut/seri 
        if(com<=3 && com>=1){
         cout << "Bot adalah= SEMUT\n\nHasil seri!";   
        } //penutup semut
        else if(com<=6 && com>=4)
        //Maka
         {
            cout << "Bot adalah GAJAH\n\nAntum menang dek" << endl;
    } //penutup gajah
    else {
        cout << "Bot adalah ORANG\n\nKamu kalah" << endl;
    } cout << endl;
   }
    //penutup 2
    
    //Pembuka 3
    else if(terpilih==3)
    {
        cout << "Kamu memilih ORANG" << endl << endl;
        srand(time(NULL));
        int com = rand() % 10;
        
        
        //Jika bot orang
        if(com<=3 && com>=1){
            cout << "Bot adalah ORANG\n\n\nHasil seri!!" << endl;
            } else if(com<=6 && com >=4){
           cout << "Bot adalah SEMUT\n\n\nKamu menang" << endl;                  } else {
                cout << "Bot adalah GAJAH\n\n\nKamu kalah!" << endl;
                } cout << endl;
    } else {
        cout << "Masukkin yg bemerr ajgg" << endl << endl;
    }
    cout << "Main lagi?= [0]: "; 
    cin >> lagi;b:
    
    if(lagi == 0)
    {
      system("cls");
      goto a;
    }
}