#include <iostream>
using namespace std;

int main(){
  string nama;
  int umur;
  char JenisKelamin;
  
  //INPUT DEK
  cout << "Siapa nama mu?: ";
  cin >> nama;
  cout << "Berapa umur mu?: ";
   cin >> umur;
  cout << "Jenis kelamin? [L/P]: ";
  cin >> JenisKelamin;
  //Selesai Input
  
  /*
  o
  u
  t
  p
  u
  t
  */
  cout << "Hai, " << nama << "! Sekarang kamu  berusia " << umur << "tahun! dan berjenis kelamin " << JenisKelamin;
  
  return 0;
}