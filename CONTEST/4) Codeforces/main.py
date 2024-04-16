t = int(input())

for _ in range(t):
    l = sorted(list(map(int,input().split())))
    if(l[1] == l[2]):
        print("YES")
        print(l[0],l[0],l[1])
    else:
        print("NO")