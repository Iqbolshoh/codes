def daraja(a, b):
    k = 1
    for i in range(b):
        k *= a
    return k


def maxx(a, b):
    if a > b:
        return a
    else:
        return b
