from turtle import *
from random import choice

def square(long, color="white"):
    #fonction qui créer un carré
    fillcolor(color)
    begin_fill()
    for i in range(4):  
        forward(long)
        right(100)
    end_fill()

#valeur à changer :
velocities = 10
max_sizes_square = 300
min_sizes_square = 0
ecart_type = 10 #nombre divisible par 2

Color = True

list_of_colors = ["blue", "green", "red", "yellow", "pink", "purple", "gray", "white", "black"]

speed(velocities)


for i in range(max_sizes_square, min_sizes_square, -ecart_type):
    
    up()
    forward(ecart_type/2)
    right(90)
    forward(ecart_type/2)
    left(90)
    down()
    
    if Color:
        square(i, choice(list_of_colors))
    else:
        square(i)
    
done()