#include <iostream>
#include "Vehicule.h"
#include "ParcAutomobile.h"

int main() {
    // Création de quelques véhicules
    Vehicule vehicule1("Toyota", "Camry", 2020);
    Vehicule vehicule2("Honda", "Civic", 2018);
    Vehicule vehicule3("Ford", "Escape", 2019);

    // Création du parc automobile
    ParcAutomobile parc;

    // Ajout des véhicules au parc
    parc.ajouterVehicule(vehicule1);
    parc.ajouterVehicule(vehicule2);
    parc.ajouterVehicule(vehicule3);

    // Affichage des véhicules du parc
    std::cout << "Véhicules dans le parc automobile :" << std::endl;
    parc.afficherVehicules();

    // Recherche d'un véhicule par marque
    std::string marqueRecherchee = "Toyota";
    Vehicule* vehiculeTrouve = parc.rechercherVehiculeParMarque(marqueRecherchee);
    if (vehiculeTrouve) {
        std::cout << "Véhicule trouvé : " << vehiculeTrouve->getMarque() << " "
                  << vehiculeTrouve->getModele() << " (" << vehiculeTrouve->getAnneeFabrication() << ")"
                  << std::endl;
    } else {
        std::cout << "Aucun véhicule trouvé pour la marque : " << marqueRecherchee << std::endl;
    }

    return 0;
}
