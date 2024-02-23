while True:
    try:
        N = int(input("Entrez un entier N (strictement positif et supérieur à 100) : "))
        if N <= 100:
            print("Veuillez entrer un nombre supérieur à 100.")
        else:
            break
    except ValueError:
        print("Veuillez entrer un nombre valide.")

def somme_chiffres(nombre):
    return sum(int(chiffre) for chiffre in str(nombre))

S = somme_chiffres(N)
while S < 1 or S > 9:
    S = somme_chiffres(S)

code = int(str(S) + str(N))
print(f"Le code est : {code}")
