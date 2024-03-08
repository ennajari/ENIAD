def chercherDiv(nbr) :
    L = []
    for i in range(1,nbr+1,1) : 
        if nbr % i == 0 :
            L.append(i)
    return L
n = int(input("donner un number : "))
L= chercherDiv(n)
print(f"les deveseur de {n} est : ",L)