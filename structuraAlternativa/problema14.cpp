#include <iostream>

//Sa se determine ultimele doua cifre ale produsului a*b , pentru   a si b citite de la tastatura.

int a;
int b;

int main() {

    std::cin >> a;
    std::cin >> b;

    std::cout << a*b % 100 / 10;
    std::cout << a*b % 10;

}