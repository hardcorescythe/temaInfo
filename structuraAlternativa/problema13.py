#Se citeste de la tastatura un numar de patru cifre. Se cere sa se verifice daca numarul este palindrom, adica daca citindu-l de la sfarsit spre inceput se obtine acelasi numar.

n = int(input())

t = (n % 10 * 10) + (n % 100 - n % 10) // 10

if t == (n // 100):
    print("numarul este palindrom")
else:
    print("numarul nu este palindrom")
