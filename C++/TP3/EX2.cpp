#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Livre {
private:
    string titre;
    string auteur;
    int anneeDePublication;

public:
    Livre(string _titre, string _auteur, int _anneeDePublication) : titre(_titre), auteur(_auteur), anneeDePublication(_anneeDePublication) {}

    string getTitre() const {
        return titre;
    }

    string getAuteur() const {
        return auteur;
    }

    int getAnneeDePublication() const {
        return anneeDePublication;
    }
};

class Bibliotheque {
private:
    vector<Livre> livres;

public:
    void ajouterLivre(const Livre& livre) {
        livres.push_back(livre);
    }

    void afficherLivres() const {
        cout << "Livres dans la bibliothèque :" << endl;
        for (const Livre& livre : livres) {
            cout << "Titre : " << livre.getTitre() << ", Auteur : " << livre.getAuteur() << ", Année de publication : " << livre.getAnneeDePublication() << endl;
        }
    }

    Livre* rechercherLivreParTitre(const string& titre) {
        for (Livre& livre : livres) {
            if (livre.getTitre() == titre) {
                return &livre;
            }
        }
        return nullptr;
    }
};

int main() {
    Bibliotheque bibliotheque;

    // Ajout de quelques livres
    bibliotheque.ajouterLivre(Livre("Le Seigneur des Anneaux", "J.R.R. Tolkien", 1954));
    bibliotheque.ajouterLivre(Livre("Harry Potter à l'école des sorciers", "J.K. Rowling", 1997));
    bibliotheque.ajouterLivre(Livre("1984", "George Orwell", 1949));

    // Affichage de tous les livres
    bibliotheque.afficherLivres();

    // Recherche d'un livre par titre
    string titreRecherche = "Le Seigneur des Anneaux";
    Livre* livreTrouve = bibliotheque.rechercherLivreParTitre(titreRecherche);
    if (livreTrouve != nullptr) {
        cout << "Livre trouvé : " << livreTrouve->getTitre() << " par " << livreTrouve->getAuteur() << ", publié en " << livreTrouve->getAnneeDePublication() << endl;
    } else {
        cout << "Livre introuvable." << endl;
    }

    return 0;
}
