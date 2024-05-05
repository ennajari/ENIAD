import math
def cube(x):
    return x**3
    
def volume_Sphere (vol):
     v = 4/3*math.pi*cube(n)
     print(f"le volume est:\t{v} \n")
    
while(True):
    n = int(input("\ndonner un number : "))
    print(f"la cube de ce number est :\t {cube(n)}\n")
    vol = cube(n)
    volume_Sphere(n)
