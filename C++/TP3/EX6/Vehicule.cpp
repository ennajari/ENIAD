#include "Vehicule.h"
#include <iostream>

Vehicule::Vehicule(const std::string& _marque, const std::string& _modele, int _anneeFabrication)
    : marque(_marque), modele(_modele), anneeFabrication(_anneeFabrication) {}

std::string Vehicule::getMarque() const {
    return marque;
}

std::string Vehicule::getModele() const {
    return modele;
}

int Vehicule::getAnneeFabrication() const {
    return anneeFabrication;
}

void Vehicule::setMarque(const std::string& _marque) {
    marque = _marque;
}

void Vehicule::setModele(const std::string& _modele) {
    modele = _modele;
}

void Vehicule::setAnneeFabrication(int _anneeFabrication) {
    anneeFabrication = _anneeFabrication;
}

void Vehicule::afficher() const {
    std::cout << "Marque: " << marque << ", Modele: " << modele << ", Annee de fabrication: " << anneeFabrication << std::endl;
}
