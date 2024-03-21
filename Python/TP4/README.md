Exercice 1.
Dans cet exercice vous devez créer une classe Compte qui permet de déposer et retirer de l'argent
de votre compte bancaire.
Les instances créées grâce à la classe Compte doivent posséder trois attributs : - nom - numero –
balance. Cela permet ainsi de créer un compte pour Asmaa, avec un numéro de compte de 12345
et un dépot initial de 20,000DH. Nous déposons ensuite 3,000DH supplémentaires grâce à la
méthode deposer.
Pour finir, nous retirons 800DH grâce à la méthode retirer.
L'attribut balance du compte de Asmaa doit contenir à la fin du script 22,200DH (20,000 + 3,000
- 800).
Exercice 2.
Dans cet exercice vous devez créer une classe Student avec les attributs suivants :
name : le nom de l'étudiant.
age : l'âge de l'étudiant.
grade : la note de l'étudiant (un nombre entier compris entre 0 et 20).
Ajoutez une méthode get_grade() à la classe Student qui renvoie la note de l'étudiant.
Définissez une classe Course avec les attributs suivants :
name : le nom du cours.
max_students : le nombre maximal d'étudiants pouvant s'inscrire au cours.
students : une liste des étudiants inscrits au cours.
Ajoutez une méthode add_student à la classe Course qui permet d'ajouter un étudiant au cours,
en vérifiant d'abord si le nombre maximal d'étudiants n'est pas atteint.
Ajoutez une méthode get_average_grade à la classe Course qui calcule et renvoie la moyenne
des notes des étudiants inscrits au cours.
Utilisez les classes définies pour créer des objets correspondant à trois étudiants avec leurs notes
respectives, puis créez un objet cours avec une capacité maximale de 2 étudiants.
Ajoutez deux des étudiants créés au cours et affichez la moyenne des notes des étudiants inscrits
au cours.
Essayez d’ajouter un troisième étudiant au cours créé.
Exercice 3.
Coder une classe myString permettant de doter les chaines de caractères des méthodes
append() et pop() faisant les mêmes opérations que celles des listes.
Ecole Nationale de l’Intelligence
Artificielle et du Digital, Berkane
Année universitaire 2023/2024
Cycle d’Ingénieur – TC
Exemple si on crée des chaines via l'instanciation : s1 = myString("Hello") et s2 =
myString("bonjour"), et on lui applique les méthodes :
print(s1.append(" world !"))
print(s2.pop(2))
On aura les résultats suivants :
Hello world !
bojour
Exercice 4.
Créez une classe "Personne".
Ajoutez deux attributs "nom" et "âge".
Créez deux classes :
"Employe" qui est une Personne (ajoutez l'attribut "salaire").
"Manager" qui est un Employé.
Rendez les attributs protégés.
Créez une méthode show_salary() dans "Employé" et "Manager".
Personnalisez le texte imprimé lors de l'impression d'une personne pour afficher son nom et son
âge sous la forme "Nom: [nom], Âge: [âge]".
Créer des objets avec les différentes classes et tester les méthodes définies.
Exercice 5.
Dans cet exercice, vous devez créer une classe Etudiant qui permettra de créer des étudiants
ayant trois attributs : nom, prénom et un numéro d’étudiant appelé eid. L’attribut eid doit être
unique et généré automatiquement pour chaque instance d'étudiant créée. Ainsi, le premier
étudiant créé aura comme identifiant unique 1, le deuxième aura l'identifiant 2, le troisième aura
l'identifiant 3, etc.
Chaque instance créée doit être ajoutée à l’attribut de classe appelé "repertoire".
Créer trois étudiants et afficher les.
Exercice 6.
Écrivez un programme en Python qui définit une classe appelée Forme avec un constructeur pour
initialiser les attributs privés largeur et longueur. Ajouter les accesseurs et les mutateurs. Définir
trois sous-classes Triangle, Rectangle et Cube héritant de la classe Forme. La classe Cube doit
avoir un attribut hauteur de plus.
Définir une méthode aire() dans les deux sous-classes Triangle et Rectangle, qui calculent l’aire,
et une méthode volume() dans la sous-classe Cube qui calcule le volume.
Dans le programme principale, définissez un triangle, un rectangle et un cube, puis appelez les
fonctions aire() et volume() avec ces deux objets.
Notez que:
L’aire du triangle est = largeur * hauteur / 2
l’aire du rectangle est = largeur * hauteur
Le volume du cube = longueur * largeur * hauteur