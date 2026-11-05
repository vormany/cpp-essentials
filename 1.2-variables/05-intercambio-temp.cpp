// 05-intercambio-temp.cpp
// Swaps two variables using a temporary variable.
// Without temp, "a = b; b = a;" loses the original value of a.

#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 7, temp;

    cout << "Before: a = " << a << ", b = " << b << endl;  // 3, 7

    temp = a;   // save the original a
    a = b;      // a takes b's value
    b = temp;   // b takes the saved value

    cout << "After:  a = " << a << ", b = " << b << endl;  // 7, 3

    return 0;
}
