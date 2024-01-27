#include <iostream>
#include <cmath>

//Sa se calculeze valoarea functiei matematice f(x) pentru o valoare a lui x introdusa de la tastatura.

float x;

int main() {

    std::cin >> x;

    if(x <= -3) {
        std::cout << pow(x, 2) + 1;
    }
    else {
        if(x > -3 && x < 3){
            std::cout << x-2;
        }
        else {
            std::cout << pow(x, 2) - 4*x + 5;
        }
    }

}