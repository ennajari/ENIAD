def supprimer_espaces(chaine):
    chaine_sans_espaces = chaine.replace(" ", "")
    return chaine_sans_espaces

chaine = input("donner un chaine des caractere qui contient des espace :")
print(f"la chine sons espace st:{supprimer_espaces(chaine)}")
