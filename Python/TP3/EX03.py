liste = [17,38,10,25,72,-1,16,82,0.5]
trie = sorted(liste)
print(f'liste trie est : {trie}')
liste.append(12)
print(liste)
liste.reverse()
print(liste)
indice_17 = liste.index(17)
print(indice_17)
liste.remove(38)
print(liste)
sous_liste_2_3 = liste[1:3]
print(sous_liste_2_3)
sous_liste_debut_2 = liste[:2]
print(sous_liste_debut_2)
sou_liste_3_fin = liste[2:]
print(sou_liste_3_fin)
sous_list_complete = liste [:]
print(sous_list_complete)
premierEtDernier = liste[0::8]
print(premierEtDernier)

