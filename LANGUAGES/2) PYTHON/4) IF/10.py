a = int(input("a = "))
b = int(input("b = "))
if a == b:
    a = 0
    b = 0
else:
    a = a + b
    b = a
print("a = ", a)
print("b = ", b)
