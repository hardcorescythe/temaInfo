#include <iostream>

//Se citeste de la tastatura un numar de patru cifre. Se cere sa se verifice daca numarul este palindrom, adica daca citindu-l de la sfarsit spre inceput se obtine acelasi numar.

int n;
int t;

int main() {

    std::cin >> n;
    t = (n % 10 * 10) + (n % 100 - n % 10) / 10;

    if(t == (n / 100)) {
        std::cout << "numarul este palindrom";
    }
    else {
        std::cout << "numarul nu este palindrom";
    }

    return(0);

}