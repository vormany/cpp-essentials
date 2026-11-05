// 02-cambio-de-base.cpp
// Changes the output base of cout with dec, oct and hex.
// These manipulators are "sticky": they stay active until changed.

#include <iostream>
using namespace std;

int main() {
    cout << "255 -> " << hex << 255 << endl;  // ff
    cout << "255 -> " << oct << 255 << endl;  // 377
    cout << "255 -> " << dec << 255 << endl;  // 255

    // Number 90 in the three bases.
    cout << "90 dec: " << dec << 90 << endl;  // 90
    cout << "90 oct: " << oct << 90 << endl;  // 132
    cout << "90 hex: " << hex << 90 << endl;  // 5a

    // hex is still active here, so this prints 5a instead of 90.
    cout << "Still hex: " << 90 << endl;

    cout << dec;  // always restore decimal when done
    cout << "Back to dec: " << 90 << endl;

    return 0;
}
