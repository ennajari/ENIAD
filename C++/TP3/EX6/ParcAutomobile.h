#ifndef PARCAUTOMOBILE_H
#define PARCAUTOMOBILE_H

#include "Vehicule.h"
#include <vector>

class ParcAutomobile {
private:
    std::vector<Vehicule> voitures;

public:
    void ajouterVehicule(const Vehicule& vehicule);
    void afficherVehicules() const;
    Vehicule* rechercherVehicule(const std::string& marque);
};

#endif // PARCAUTOMOBILE_H
