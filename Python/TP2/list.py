print()
P = ['maroc' , 'mali' , 'alg' , 'tuni' , 'FR']
print(P)
print("taper  deux pays a votre choix : ")
p1 = input("Enter la premiere pays : ")
p2 = input("Enter la premiere pays : ")

a = P.index(p1)
b = P.index(p2)

P[a] , P[b] = P[b] , P[a] 
print(P)
