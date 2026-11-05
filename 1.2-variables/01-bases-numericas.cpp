// 01-bases-numericas.cpp
// Shows how C++ reads decimal, octal and hexadecimal integer literals.
// The same digits give different values depending on the prefix.

#include <iostream>
using namespace std;

int main() {
    cout << 0123 << endl;   // octal (leading 0):  1*8^2 + 2*8^1 + 3*8^0  = 83
    cout << 123 << endl;    // decimal (no prefix): 1*10^2 + 2*10^1 + 3*10^0 = 123
    cout << 0x123 << endl;  // hex (0x prefix):    1*16^2 + 2*16^1 + 3*16^0 = 291

    // Same value (90) written in three bases.
    cout << 90 << endl;     // decimal
    cout << 0132 << endl;   // octal:  1*64 + 3*8 + 2   = 90
    cout << 0x5A << endl;   // hex:    5*16 + 10 (A=10) = 90

    return 0;
}
