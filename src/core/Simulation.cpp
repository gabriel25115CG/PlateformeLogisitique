#include "Simulation.h"

void Simulation::demarrer() {
    // Logique de simulation à implémenter
}

void Simulation::ajouterEntrepot(const Entrepot& entrepot) {
    entrepots.push_back(entrepot);
}

void Simulation::ajouterTransporteur(const Transporteur& transporteur) {
    transporteurs.push_back(transporteur);
}
