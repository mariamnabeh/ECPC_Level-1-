#include <iostream>
using namespace std;

int main() {
    int a = 5;

    // Reference
    int &r = a;

    // Pointer
    int *p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Reference r: " << r << endl;
    cout << "Pointer *p: " << *p << endl;

    cout << "Address of a: " << &a << endl;
    cout << "Address via reference (&r): " << &r << endl;
    cout << "Address via pointer (p): " << p << endl;

    cout << "------------------" << endl;

    // Change using reference
    r = 10;
    cout << "After r = 10:" << endl;
    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;

    cout << "------------------" << endl;

    // Change using pointer
    *p = 20;
    cout << "After *p = 20:" << endl;
    cout << "a = " << a << endl;
    cout << "r = " << r << endl;

    return 0;
}
