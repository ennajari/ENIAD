#include <iostream>
#include <string>
#include <vector>

using namespace std;

class CompteBancaire {
private:
    double solde;
    double tauxInteret;

public:
    CompteBancaire(double _solde, double _tauxInteret) : solde(_solde), tauxInteret(_tauxInteret) {}

    double getSolde() const {
        return solde;
    }

    double getTauxInteret() const {
        return tauxInteret;
    }

    void setSolde(double _solde) {
        solde = _solde;
    }

    void setTauxInteret(double _tauxInteret) {
        tauxInteret = _tauxInteret;
    }
};

class Banque {
private:
    vector<CompteBancaire> comptesBancaires;

public:
    void ajouterCompte(const CompteBancaire& cb) {
        comptesBancaires.push_back(cb);
    }

    void afficherComptes() const {
        cout << "Liste des comptes de la banque :" << endl;
        for (const CompteBancaire& cb : comptesBancaires) {
            cout << "Solde : " << cb.getSolde() << ", Taux d\'interet : " << cb.getTauxInteret() << endl;
        }
    }

    void effectuerDepot(int indexCompte, double montant) {
        if (indexCompte >= 0 && indexCompte < comptesBancaires.size()) {
            comptesBancaires[indexCompte].setSolde(comptesBancaires[indexCompte].getSolde() + montant);
        } else {
            cout << "Indice de compte invalide." << endl;
        }
    }

    void effectuerRetrait(int indexCompte, double montant) {
        if (indexCompte >= 0 && indexCompte < comptesBancaires.size()) {
            if (comptesBancaires[indexCompte].getSolde() >= montant) {
                comptesBancaires[indexCompte].setSolde(comptesBancaires[indexCompte].getSolde() - montant);
            } else {
                cout << "Solde insuffisant." << endl;
            }
        } else {
            cout << "Indice de compte invalide." << endl;
        }
    }

    void calculerInterets() {
        for (CompteBancaire& cb : comptesBancaires) {
            double interets = cb.getSolde() * cb.getTauxInteret();
            cb.setSolde(cb.getSolde() + interets);
        }
    }
};

int main() {
    Banque banque;
    banque.ajouterCompte(CompteBancaire(1000, 0.05));
    banque.ajouterCompte(CompteBancaire(2000, 0.03));
    banque.afficherComptes();
    banque.effectuerDepot(0, 500);
    banque.effectuerRetrait(1, 300);
    banque.calculerInterets();
    banque.afficherComptes();

    return 0;
}
