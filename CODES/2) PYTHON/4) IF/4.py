# a = int(input("a = "))
# b = int(input("b = "))
# c = int(input("c = "))
# d = 0
# if a > 0:
#     d = d + 1
# if b > 0:
#     d = d + 1
# if c > 0:
#     d = d + 1
# print(d, " ta musbat")

a = int(input("a = "))
b = int(input("b = "))
c = int(input("c = "))
print(sum(1 for x in [a, b, c] if x > 0), " ta musbat")
