#Sa se determine ultimele doua cifre ale produsului a*b , pentru   a si b citite de la tastatura.


a = int(input())
b = int(input())


print(a*b % 100 // 10, a*b % 10)