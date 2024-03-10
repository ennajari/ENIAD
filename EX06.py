def trouver(ele, tup):
    try:
        pos = tup.index(ele)
        return pos
    except ValueError:
        return -1

tuple = 10, 20, 30, 40, 50
recherche = 30
trouvee = trouver(recherche, tuple)
print("La position de l'élément",recherche, "dans le tuple est:", trouvee)
#08
def cumul_valeurs(liste):
    cumul = []
    somme = 0
    for valeur in liste:
        somme += valeur
        cumul.append(somme)
    return cumul

print(cumul_valeurs([1, 4, 7]))  
print(cumul_valeurs([1, 2, 3, 4, 5, 6]))  
print(cumul_valeurs([]))  
#09
def moyenne_eleves(dictionnaire_notes):
    moyennes = {}
    for eleve, notes in dictionnaire_notes.items():
        moyenne = sum(notes) / len(notes) if notes else 0
        moyennes[eleve] = moyenne
    return moyennes

notes_eleves = {
    "Alice": [15, 18, 16],
    "Bob": [12, 14, 10],
    "Charlie": [20, 19, 18],
    "David": [] 
}

resultat = moyenne_eleves(notes_eleves)
print(resultat)  

