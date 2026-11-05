// 06-comentarios.cpp
// Line comments (//) and block comments (/* */).
// Block comments cannot be nested.

#include <iostream>
using namespace std;

int main() {
    cout << "A" << endl;
    // cout << "B" << endl;          // line comment: not executed
    /* cout << "C" << endl;
       cout << "D" << endl; */       // block comment: not executed
    cout << "E" << endl;             // expected output: A, then E

    int/**/x = 5;                    // a comment counts as one space
    cout << x << endl;               // 5

    // This does NOT compile: the first */ closes the comment early.
    // /* int i; /* int j; */ int k; */

    return 0;
}
