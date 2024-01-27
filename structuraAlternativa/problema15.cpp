#include <iostream>

//Sa se verifice daca patru numere a,b,c si d date de la tastatura pot forma o multime.

int a;
int b;
int c;
int d;

int main() {

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    if(a != b && b != c && c != d && a != c && a != d && b != d) {

        std::cout << "numerele pot forma o multime";

    } else {

        std::cout << "numerele nu pot forma o multime";

    }

}