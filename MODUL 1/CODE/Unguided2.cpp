#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Masukan angka 0-100: ";
    cin >> x;
    
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima",
         "enam", "tuju", "delapan", "sembilan"};

    if (x < 0 || x > 100 ) {
        cout << "Tidak valid";
    } else if (x == 0) {
        cout << "nol";
    } else if (x == 10) {
        cout << "sepuluh";
    } else if (x == 11) {
        cout << "sebelas";
    } else if (x == 100) {
        cout << "seratus";
    } else if (x < 11) {
        cout << satuan[x];
    } else if (x < 20) {
        cout << satuan[x-10] << " belas";
    } else {
        cout << satuan[x/10] << " puluh";
        if (x % 10 != 0) {
            cout << "  " << satuan[x%10];
        }
    } 
    cout << endl;

    return 0;
}