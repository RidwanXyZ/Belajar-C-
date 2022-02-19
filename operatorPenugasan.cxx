#include <iostream>
using namespace std;

int main(){
int a, b;


    //a dan b langsung isi aja lah:v
    a = 100;
    b = 50;
    cout << "Input a= ";
    cin >> a;
    cout << "Input b= ";
    cin >> b;
    //sistem
    b += a; //sama dengan b=b+a
    cout << "Hasil b+= a adalah " << b << endl;
    b -= a;
    cout << "Hasil b-= a adalah " << b << endl;
    b *= a;
    cout << "Hasil b *= a adalah " << b << endl;
    b /= a;
    cout << "Hasil dari b /= a adalah " << b << endl;
    b %= a;
    cout << "Hasil dari b%=a adalab " << b << endl;
    
    
    return 0;
}