from turtle import*
import colorsys
bgcolor("black")
pensize(4)
tracer(100)
h = 0
for i in range(540):
    c = colorsys.hsv_to_rgb(h,1,1)
    h += 0.008
    color(c)
    up()
    fd(i)
    goto(0,0)
    down()
    rt(90)
    begin_fill()
    circle(i,60)
    end_fill()
    rt(144)
    for j in range(3):
        circle(20,120)
        rt(45)
done()
        