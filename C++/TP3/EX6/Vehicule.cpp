#include "Vehicule.h"

Vehicule::Vehicule(const std::string& marque, const std::string& modele, int annee)
    : marque_(marque), modele_(modele), anneeFabrication_(annee) {}

std::string Vehicule::getMarque() const {
    return marque_;
}

std::string Vehicule::getModele() const {
    return modele_;
}

int Vehicule::getAnneeFabrication() const {
    return anneeFabrication_;
}
