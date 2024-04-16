import turtle as t
import colorsys

t.bgcolor("black")
t.tracer(100)
h = 0.4

def draw(ang, n):
    t.circle(5 + n, 60)
    t.left(ang)
    t.circle(5 + n, 60)

for i in range(200):
    c = colorsys.hsv_to_rgb(h, 1, 1)
    h += 0.005
    t.color(c)
    t.pensize(5)
    draw(90, i * 2)
    draw(120, i * 2.5)
t.done()