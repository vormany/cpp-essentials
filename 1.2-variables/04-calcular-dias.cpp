/* ************************************************
    Author: Andres
    Date:   05/11/26
    Purpose: Approximate number of days lived from age.
 ************************************************ */

#include <iostream>
#include <string>
using namespace std;

void calcularDias() {
    string nombre;     // user name (can contain spaces)
    int edad, dias;

    cout << "Introduce tu nombre: \n";
    getline(cin, nombre);  // reads the whole line, spaces included
    cout << "Ahora introduce tu edad: \n";
    cin >> edad;

    dias = edad * 365;     // approximation: ignores leap years

    cout << "Hola " << nombre << ", has vivido aproximadamente "
         << dias << " dias." << endl;

    // Same value in different bases (hex/oct stay active until changed).
    cout << dec << dias << endl;   // decimal
    cout << hex << dias << endl;   // hexadecimal
    cout << oct << edad << endl;   // age in octal
    cout << dec;                   // restore decimal output
}

int main() {
    calcularDias();
    return 0;
}

// Notes:
// - Typing "011" at the keyboard is read by cin as decimal 11.
//   The leading-0 octal rule only applies to literals in source code.
// - If another getline follows "cin >> edad", add cin.ignore();
//   to discard the newline left in the buffer.
