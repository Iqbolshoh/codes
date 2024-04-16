a = int(input("a = "))
bir = a % 10
on = a // 10 % 10
yuz = a // 100
l = bir > on and on > yuz
print(l)
