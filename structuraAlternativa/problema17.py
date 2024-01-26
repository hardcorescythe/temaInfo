#Sa se calculeze valoarea functiei matematice f(x) pentru o valoare a lui x introdusa de la tastatura.

x = float(input())

if x <= -3:
    print(x**2 + 1)
else:
    if x > -3 and x < 3 :
        print(x - 2)
    else:
        print(x**2 - 4 * x + 5)