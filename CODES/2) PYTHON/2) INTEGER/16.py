a = int(input("a = "))
bir = a % 10
on = a // 10 % 10
yuz = a // 100
c = yuz * 100 + bir * 10 + on
print("N = ", c)