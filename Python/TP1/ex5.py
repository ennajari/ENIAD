
try:
    n = int(input("Entrez le nombre de termes de la séquence de Fibonacci : "))
    if n <= 0:
        print("Veuillez entrer un nombre positif.")
    else:
        a, b = 0, 1
        count = 0
        while count < n:
            print(a, end=" ")
            a, b = b, a + b
            count += 1
except ValueError:
    print("Veuillez entrer un nombre valide.")
