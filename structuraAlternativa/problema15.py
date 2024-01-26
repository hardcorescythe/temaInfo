#Sa se verifice daca patru numere a,b,c si d date de la tastatura pot forma o multime.


a = int(input())
b = int(input())
c = int(input())
d = int(input())

if(a != b)and(b != c)and(c != d)and(a != c)and(a != d)and(b != d):
    print("a, b, c si d pot forma o multime")
else:
    print("a, b, c si d nu pot forma o multime")