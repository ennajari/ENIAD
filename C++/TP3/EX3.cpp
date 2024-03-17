#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employe {
private:
    string nom;
    double salaire;
    int dateDembouche;

public:
    Employe(string _nom = "", double _salaire = 0.0, int _dateDembouche = 0) : nom(_nom), salaire(_salaire), dateDembouche(_dateDembouche) {}

    void setNom(string _nom) {
        nom = _nom;
    }

    string getNom() const {
        return nom;
    }

    void setSalaire(double _salaire) {
        salaire = _salaire;
    }

    double getSalaire() const {
        return salaire;
    }

    void setDateDembouche(int _dateDembouche) {
        dateDembouche = _dateDembouche;
    }

    int getDateDembouche() const {
        return dateDembouche;
    }

    void saisirEmploye() {
        cout << "Nom de l'employe : ";
        cin.ignore();
        getline(cin,nom);
        cout << "Salaire de l\'employe : ";
        cin >> salaire;
        cout << "Annee d\'embauche de l\'employe : ";
        cin >> dateDembouche;
    }
};

class Entreprise {
private:

    vector<Employe> listeEmployes;

public:
    void ajouterEmploye(const Employe& emp) {
        listeEmployes.push_back(emp);
    }

    void afficherListe() const {
        cout << "Liste des employes de l\'entreprise :" << endl;
        for (const Employe& emp : listeEmployes) {
            cout << "Nom : " << emp.getNom() << ", Salaire : " << emp.getSalaire() << ", Date d'embauche : " << emp.getDateDembouche() << endl;
        }
    }

    double calculerMasseSalariale() const {
        double masseSalariale = 0.0;
        for (const Employe& emp : listeEmployes) {
            masseSalariale += emp.getSalaire();
        }
        return masseSalariale;
    }
};

int main() {
    Entreprise entreprise;

    int nombreEmployes;
    cout << "Combien d\'employes souhaitez-vous ajouter ? ";
    cin >> nombreEmployes;

    for (int i = 0; i < nombreEmployes; ++i) {
        Employe employe;
        cout << "Saisie des donnees pour l\'employe " << i + 1 << ":" << endl;
        employe.saisirEmploye();
        entreprise.ajouterEmploye(employe);
    }
    entreprise.afficherListe();

    cout << "Masse salariale totale de l\'entreprise : " << entreprise.calculerMasseSalariale() << endl;

    return 0;
}
