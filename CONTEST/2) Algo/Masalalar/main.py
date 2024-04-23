from math import sin,cos,pi
a=int(input())
y=0
i=-pi/2
while i<=pi:
    y=y+2*(a)**(sin(2*i)/3)+i*i*cos(a*i)
    i=i+pi/10
print("%.2f"% y)