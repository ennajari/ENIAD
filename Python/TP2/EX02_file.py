import Exercice2
while(True):
    a = int(input("Donnez la valeur de a : "))
    b = int(input("Donnez la valeur de b : "))
    choix = int(input("Tapez un nombre : \n1 pour l'addition \n2 pour la soustraction \n3 pour la multiplication \n4 pour la division\n"))

    if choix == 1:
        print(f"{a} + {b} = {Exercice2.addition(a, b)}")
    elif choix == 2:
        print(f"{a} - {b} = {Exercice2.soustraction(a, b)}")
    elif choix == 3:
        print(f"{a} * {b} = {Exercice2.multiplication(a, b)}")
    elif choix == 4:
        if b != 0:
            print(f"{a} / {b} = {Exercice2.division(a, b)}")
        else:
            print("Division par zéro n'est pas autorisée.")
    else:
        print("Veuillez choisir une option valide.")
