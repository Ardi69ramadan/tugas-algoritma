#include <iostream>
#include <conio.h>

using namespace std;
int main() {
    int a, b;
    cout << "menentukan nilai terbesar 2 buah input \n";
    cout << "masukkan nilai 1 : "; cin >> a;
    cout << "masukkan nilai 2 : "; cin >> b;

    if ( a > b )
        cout << "nilai terbesar   : " << a << endl;
    else
        cout << "nilai terbesar   : " << b << endl;

    getch();
}