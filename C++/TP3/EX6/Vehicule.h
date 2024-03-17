#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>

class Vehicule {
private:
    std::string marque;
    std::string modele;
    int anneeFabrication;

public:
    // Constructeur
    Vehicule(const std::string& _marque, const std::string& _modele, int _anneeFabrication);

    // Méthodes d'accès en lecture
    std::string getMarque() const;
    std::string getModele() const;
    int getAnneeFabrication() const;

    // Méthodes d'accès en écriture
    void setMarque(const std::string& _marque);
    void setModele(const std::string& _modele);
    void setAnneeFabrication(int _anneeFabrication);

    // Méthode pour afficher les informations du véhicule
    void afficher() const;
};

#endif // VEHICULE_H
