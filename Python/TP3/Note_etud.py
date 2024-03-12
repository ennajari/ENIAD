Note = []
etud = []

for i in range(4):
    etud.append(input(f"Donnez le nom de l'étudiant {i+1}: "))
    Note.append(float(input(f"Donnez la note de l'étudiant {etud[i]}: ")))

for n , e in zip(etud,Note):
    print(n,":",e, end=" ")
