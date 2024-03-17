#ifndef PARCAUTOMOBILE_H
#define PARCAUTOMOBILE_H

#include <vector>
#include "Vehicule.h"

class ParcAutomobile {
public:
    // Méthodes
    void ajouterVehicule(const Vehicule& vehicule);
    void afficherVehicules() const;
    Vehicule* rechercherVehiculeParMarque(const std::string& marque);

private:
    std::vector<Vehicule> vehicules_;
};

#endif // PARCAUTOMOBILE_H
