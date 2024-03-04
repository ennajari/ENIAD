import math
somme = 0
for i in range(5):
    N = float(input(f"donner la valeur de N{i+1} : "))
    somme += N 
moy = somme/5
print(f"la somme est {somme} la moyenne est :",format(moy,'.2f'))