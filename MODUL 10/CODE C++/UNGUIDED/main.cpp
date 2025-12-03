#include <iostream>
#include "bstree.h"

using namespace std;

int main() {
    address root = Nil;

    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 6); 
    insertNode(root, 7);

    cout << "In-order   : ";
    InOrder(root);
    cout << endl;

    cout << "Pre-order  : ";
    PreOrder(root);
    cout << endl;

    cout << "Post-order : ";
    PostOrder(root);
    cout << endl;

    cout << "kedalaman     : " << hitungKedalaman(root) << endl;
    cout << "jumlah node   : " << hitungJumlahNode(root) << endl;
    cout << "total info    : " << hitungTotalInfo(root) << endl;

    return 0;
}
