a = int(input("a = "))
bir = a % 10
on = a // 10 % 10
yuz = a // 100
c = on * 100 + yuz * 10 + bir
print("N = ", c)