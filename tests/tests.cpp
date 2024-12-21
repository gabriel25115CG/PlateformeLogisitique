#include <iostream>
#include "include/core/Entrepot.h"
#include "include/core/Produit.h"
#include "include/core/Transporteur.h"
#include "include/core/Simulation.h"

void testEntrepot() {
    std::cout << "=== Test de la classe Entrepot ===" << std::endl;

    Entrepot entrepot(5); // Capacité : 5 produits
    Produit p1("REF123", 10);
    Produit p2("REF456", 20);

    if (entrepot.ajouterProduit(p1)) {
        std::cout << "Produit 1 ajouté avec succès !" << std::endl;
    } else {
        std::cout << "Erreur : l'entrepôt est plein." << std::endl;
    }

    if (entrepot.ajouterProduit(p2)) {
        std::cout << "Produit 2 ajouté avec succès !" << std::endl;
    } else {
        std::cout << "Erreur : l'entrepôt est plein." << std::endl;
    }

    std::cout << "Produits stockés : " << entrepot.getProduits().size() << std::endl;
}

void testProduit() {
    std::cout << "=== Test de la classe Produit ===" << std::endl;

    Produit produit("REF001", 15);
    std::cout << "Référence : " << produit.getReference() << std::endl;
    std::cout << "Quantité : " << produit.getQuantite() << std::endl;
}

void testTransporteur() {
    std::cout << "=== Test de la classe Transporteur ===" << std::endl;

    Transporteur transporteur(50); // Capacité : 50 unités
    transporteur.setDestination("Paris");

    std::cout << "Capacité maximale : " << transporteur.getCapacite() << std::endl;
    std::cout << "Destination : " << transporteur.getDestination() << std::endl;
}

void testSimulation() {
    std::cout << "=== Test de la classe Simulation ===" << std::endl;

    Simulation simulation;

    Entrepot entrepot(10);
    simulation.ajouterEntrepot(entrepot);

    Transporteur transporteur(100);
    simulation.ajouterTransporteur(transporteur);

    std::cout << "Simulation initialisée avec succès." << std::endl;
    simulation.demarrer();
}

int main() {
    testEntrepot();
    std::cout << std::endl;

    testProduit();
    std::cout << std::endl;

    testTransporteur();
    std::cout << std::endl;

    testSimulation();
    return 0;
}
