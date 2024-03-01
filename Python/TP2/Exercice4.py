def Voyelles(s):
    count = 0
    for i in s:
        if i in "aeiouAEIOU":
            count += 1
    return count

s = input("Donnez une chaîne de caractères qui contient des voyelles : ")
print("Le nombre de voyelles dans la chaîne est :", Voyelles(s))
