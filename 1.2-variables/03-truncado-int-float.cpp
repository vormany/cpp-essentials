// 03-truncado-int-float.cpp
// Shows what happens when a decimal value is stored in an int.
// The fractional part is truncated (cut off toward zero), not rounded.

#include <iostream>
using namespace std;

int main() {
    int a = 7.9;      // truncated to 7 (may trigger a narrowing warning)
    int b = -7.9;     // truncated toward zero: -7, not -8
    float c = 7;      // integer stored as float: 7.0, no information lost
    float d = 8.99;   // float keeps the decimals

    cout << a << endl;  // 7
    cout << b << endl;  // -7
    cout << c << endl;  // 7 (cout does not print the .0)
    cout << d << endl;  // 8.99

    // The int/float difference shows up in division.
    int   entero = 7;
    float real   = 7;
    cout << entero / 2 << endl;  // 3   (integer division)
    cout << real / 2 << endl;    // 3.5

    return 0;
}
