#include <iostream>
using namespace std;

int main(){
    int a, b ,c;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka ke-dua: ";
    cin >> b;
    
    c = a + b;
    
    cout << "Hasil penjumlahan dari " << a << " dan " << b << " adalah= " << c << endl;
    cout << "Hasil pengurangan adalah " << a - b << endl;
    cout << "Hasil pembagian adalah " << a / b << endl;
    cout << "Hasil perkalian adalah " << a * b << endl;
    cout << "Hasil persentase adalah " << a % b;
    
    return 0;
}


