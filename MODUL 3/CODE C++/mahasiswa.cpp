#include "mahasiswa.h"
#include <iostream>
using namespace std;

void inputMhs(mahasiswa &m)
{
    cout << "Input nama = ";
    cin >> (m).nim;
    cout << "Input nilai = ";
    cin >> (m).nilai1;
    cout << "Input nilai = ";
    cin >> (m).nilai2;
}
float rata2(mahasiswa m)
{
    return float(m.nilai1 +m.nilai2) /2;
}