// 07-lab-refactor.cpp
// LAB 1.2.5: replace comments with descriptive names and clear code.

#include <iostream>

int main()
{
    int tresHorasEnSegundos = 3 * 60 * 60;
    int tresMinutosEnSegundos = 3 * 60;
    int cincoMinutosEnSegundos = 5 * 60;
    float pi = 3.141592f;

    std::cout << "3 hours (s): " << tresHorasEnSegundos << std::endl;
    std::cout << "3 min (s):   " << tresMinutosEnSegundos << std::endl;
    std::cout << "5 min (s):   " << cincoMinutosEnSegundos << std::endl;
    std::cout << "pi:          " << pi << std::endl;

    return 0;
}
