#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Etudiant {
private:
    string nom;
    int age;
    double note;

public:
    // Constructeur
    Etudiant(string _nom, int _age, double _note) : nom(_nom), age(_age), note(_note) {}

    // Accesseurs
    string getNom() const {
        return nom;
    }

    int getAge() const {
        return age;
    }

    double getNote() const {
        return note;
    }
};

class SalleDeClasse {
private:
    vector<Etudiant> etudiants;

public:
    // Méthode pour ajouter un étudiant à la salle de classe
    void ajouterEtudiant(const Etudiant& etudiant) {
        etudiants.push_back(etudiant);
    }

    // Méthode pour afficher tous les étudiants de la salle de classe
    void afficherEtudiants() const {
        cout << "Liste des étudiants dans la salle de classe :" << endl;
        for (const Etudiant& etudiant : etudiants) {
            cout << "Nom : " << etudiant.getNom() << ", Age : " << etudiant.getAge() << ", Note : " << etudiant.getNote() << endl;
        }
    }

    // Méthode pour calculer la moyenne des notes des étudiants
    double calculerMoyenne() const {
        if (etudiants.empty()) {
            return 0.0;
        }

        double sommeNotes = 0.0;
        for (const Etudiant& etudiant : etudiants) {
            sommeNotes += etudiant.getNote();
        }
        return sommeNotes / etudiants.size();
    }

    // Méthode pour trouver l'étudiant avec la note la plus élevée
    Etudiant trouverEtudiantNoteMax() const {
        if (etudiants.empty()) {
            // Si la liste des étudiants est vide, retourner un étudiant avec une note de -1
            return Etudiant("", 0, -1);
        }

        // Initialiser avec le premier étudiant de la liste
        Etudiant etudiantNoteMax = etudiants[0];
        for (const Etudiant& etudiant : etudiants) {
            if (etudiant.getNote() > etudiantNoteMax.getNote()) {
                etudiantNoteMax = etudiant;
            }
        }
        return etudiantNoteMax;
    }
};

int main() {
    // Création d'une salle de classe
    SalleDeClasse salleDeClasse;

    // Ajout d'étudiants à la salle de classe
    salleDeClasse.ajouterEtudiant(Etudiant("Alice", 20, 15.5));
    salleDeClasse.ajouterEtudiant(Etudiant("Bob", 21, 14.8));
    salleDeClasse.ajouterEtudiant(Etudiant("Charlie", 19, 16.2));

    // Affichage des étudiants de la salle de classe
    salleDeClasse.afficherEtudiants();

    // Calcul de la moyenne des notes des étudiants
    cout << "Moyenne des notes : " << salleDeClasse.calculerMoyenne() << endl;

    // Recherche de l'étudiant avec la note la plus élevée
    Etudiant etudiantNoteMax = salleDeClasse.trouverEtudiantNoteMax();
    cout << "Etudiant avec la note la plus élevée : " << etudiantNoteMax.getNom() << " avec la note " << etudiantNoteMax.getNote() << endl;

    return 0;
}
