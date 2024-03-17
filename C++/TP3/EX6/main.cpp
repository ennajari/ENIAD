#include "Vehicule.h"
#include "ParcAutomobile.h"
#include <iostream>

int main() {
    ParcAutomobile parc;

    // Ajout de véhicules
    Vehicule v1("Toyota", "Corolla", 2020);
    Vehicule v2("Ford", "Focus", 2018);
    parc.ajouterVehicule(v1);
    parc.ajouterVehicule(v2);

    // Affichage des véhicules
    std::cout << "Vehicules dans le parc :" << std::endl;
    parc.afficherVehicules();

    // Recherche d'un véhicule par marque
    std::string marqueRecherchee = "Toyota";
    Vehicule* vehiculeRecherche = parc.rechercherVehicule(marqueRecherchee);
    if (vehiculeRecherche != nullptr) {
        std::cout << "Vehicule trouve : ";
        vehiculeRecherche->afficher();
    } else {
        std::cout << "Aucun vehicule de la marque " << marqueRecherchee << " n'a ete trouve." << std::endl;
    }

    return 0;
}
