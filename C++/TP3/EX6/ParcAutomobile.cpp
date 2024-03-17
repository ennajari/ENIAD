#include "ParcAutomobile.h"

void ParcAutomobile::ajouterVehicule(const Vehicule& vehicule) {
    voitures.push_back(vehicule);
}

void ParcAutomobile::afficherVehicules() const {
    for (const auto& v : voitures) {
        v.afficher();
    }
}

Vehicule* ParcAutomobile::rechercherVehicule(const std::string& marque) {
    for (auto& v : voitures) {
        if (v.getMarque() == marque) {
            return &v;
        }
    }
    return nullptr;
}
