# Définition des taux de TVA pour chaque catégorie
TVA_A = 0.07
TVA_B = 0.20
TVA_C = 0.25

while True:
    try:
        prix_hors_taxe = float(input("Entrez le prix hors taxe du produit : "))
        break
    except ValueError:
        print("Veuillez entrer un nombre valide.")

categorie = input("Entrez la catégorie du produit (A, B ou C) : ")

if categorie.upper() == "A":
    prix_ttc = prix_hors_taxe * (1 + TVA_A)
elif categorie.upper() == "B":
    prix_ttc = prix_hors_taxe * (1 + TVA_B)
elif categorie.upper() == "C":
    prix_ttc = prix_hors_taxe * (1 + TVA_C)
else:
    print("Catégorie invalide. Veuillez choisir A, B ou C.")

print(f"Le prix TTC du produit est : {prix_ttc:.2f} euros")
