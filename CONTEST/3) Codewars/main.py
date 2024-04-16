s = input()
n = len(s)
K = ""
for i in range(1, n + 1):
    K += s[-i]


def ozgartir(tekst):
    tekst = tekst.replace("hs", "sh")
    tekst = tekst.replace("hc", "ch")
    tekst = tekst.replace("gn", "ng")
    return tekst
print(ozgartir(K))
