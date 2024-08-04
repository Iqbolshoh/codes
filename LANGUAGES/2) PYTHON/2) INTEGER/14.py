a = int(input("a = "))
bir = a % 10
on = a // 10 % 10
yuz = a // 100
c = bir * 100 + yuz * 10 + on
print("N = ", c)