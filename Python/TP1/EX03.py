n = int(input("Entrez un nombre entier pour calculer sa factorielle : "))
while n < 0:
    print("Veuillez entrer un nombre entier positif.")
    n = int(input("Entrez un nombre entier pour calculer sa factorielle : "))
try:
    fact = 1
    for i in range(1, n + 1):
        fact *= i
    print(f"La factorielle de {n} est : {fact}")
except ValueError:
    print("Impossible de calculer la factorielle ! Entrez un nombre entier valide.")
