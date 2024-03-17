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
    Etudiant(string _nom, int _age, double _note) : nom(_nom), age(_age), note(_note) {}

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
    void ajouterEtudiant(const Etudiant& etudiant) {
        etudiants.push_back(etudiant);
    }

    void afficherEtudiants() const {
        cout << "Liste des étudiants dans la salle de classe :" << endl;
        for (const Etudiant& etudiant : etudiants) {
            cout << "Nom : " << etudiant.getNom() << ", Age : " << etudiant.getAge() << ", Note : " << etudiant.getNote() << endl;
        }
    }

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

    Etudiant trouverEtudiantNoteMax() const {
        if (etudiants.empty()) {
            return Etudiant("", 0, -1);
        }

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
    SalleDeClasse salleDeClasse;

    salleDeClasse.ajouterEtudiant(Etudiant("Alice", 20, 15.5));
    salleDeClasse.ajouterEtudiant(Etudiant("Bob", 21, 14.8));
    salleDeClasse.ajouterEtudiant(Etudiant("Charlie", 19, 16.2));

    salleDeClasse.afficherEtudiants();

    cout << "Moyenne des notes : " << salleDeClasse.calculerMoyenne() << endl;

    Etudiant etudiantNoteMax = salleDeClasse.trouverEtudiantNoteMax();
    cout << "Etudiant avec la note la plus élevée : " << etudiantNoteMax.getNom() << " avec la note " << etudiantNoteMax.getNote() << endl;

    return 0;
}
