#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    for(int i = x; i >= 0; i--){
        for(int s = 0; s < x - i; s++){
            cout << "  ";
        }
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }
        cout << "* ";
        for(int k = 1; k <= i; k++){
            cout << k << " ";
        }
        cout << endl;
    }
}