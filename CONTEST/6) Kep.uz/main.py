# a, b = map(int, input().split()) #input

#print(*range(1, 101)) #for

# print(*[i for i in range(20, 90) if (i//10) % 2 == 0]) #for

# print(*(input().split()[::-1])) #next_numprint(1,3)  #swap

# a, b, c = map(int, [input() for _ in range(3)]) #inputprint(1,3)

# print({1: 6, 2: 5, 3: 4, 5: 2, 4: 3, 6: 1}[int(input())]) #lugat

# print(max(int(input()) for _ in range(3))) #max

# print(bin(int(input()))[2:])  #to_binary

# print(int(input(), 2)) #to_decimal 

# print((lambda n:n*(n+1)*(2*n+1)//6)(int(input()))) #daraja

# print('Yes' if int(input()) % 2 == 0 else 'No') #if

# from datetime import datetime; print(datetime.today().strftime("%d-%m-%Y")) #date

# print("+" if int(input())>=0 and int(input()) else "-") #daraja

# print("No" if any(i != '0' for i in input()) else "Yes") #char

# print(sum(1 for harf in input() if harf in "AEIOUaeiou")) #unli

# a,b,k = map(int, input().split());print(sum(i for i in range(a,b+1) if i % k == 0)) #sum #boluvchi

# print("Yes" if input().startswith(input()) else "No") #string #satr

# print(int(input())**int(input())**int(input())) #daraja

# print({'dollar':11000,'yevro':12000,'rubl':180}[input()]*int(input())) #kurs
 
# print("Yes" if (lambda n: n % 3 == 0 or n % 4 == 0 or n % 5 != 0)(int(input())) else "No") #lambda #if

# print((lambda n:n*(n+1)//2)(int(input()))) #sum

# print(sum(int(raqam) for raqam in input())) #raqamlar yigindisi

# print(*[i for i in range(1000, 9999) if (i//10) % 2 == 0]) 

# print(format(eval(input()),".0f")) #yaxlitlash

# print(round(eval(input()))) #yaxlitlash

