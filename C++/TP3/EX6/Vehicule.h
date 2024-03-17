#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>

class Vehicule {
public:
    // Constructeur
    Vehicule(const std::string& marque, const std::string& modele, int annee);

    // Accesseurs
    std::string getMarque() const;
    std::string getModele() const;
    int getAnneeFabrication() const;

private:
    std::string marque_;
    std::string modele_;
    int anneeFabrication_;
};

#endif // VEHICULE_H