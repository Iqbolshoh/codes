# a = int(input("a = "))
# b = int(input("b = "))
# c = int(input("c = "))
# d = 0
# e = 0
# if a > 0:
#     d = d + 1
# elif a < 0:
#     e = e + 1
# if b > 0:
#     d = d + 1
# elif b < 0:
#     e = e + 1
# if c > 0:
#     d = d + 1
# elif c < 0:
#     e = e + 1
# print(d, "ta musbat")
# print(e, "ta manfiy")

a = int(input("a = "))
b = int(input("b = "))
c = int(input("c = "))
print(sum(x > 0 for x in [a, b, c]), "ta musbat")
print(sum(x < 0 for x in [a, b, c]), "ta manfiy")
