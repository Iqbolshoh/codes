n = int(input("n = "))
soat = n // 3600
n = n % 3600
min = n // 60
n = n % 60
sek = n % 3600
print(soat, " soat ")
print(min, " minut ")
print(sek, " sekund ")
