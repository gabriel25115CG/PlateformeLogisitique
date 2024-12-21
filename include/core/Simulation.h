#ifndef SIMULATION_H
#define SIMULATION_H

#include <vector>
#include "Entrepot.h"
#include "Transporteur.h"

/**
 * Classe Simulation : coordonne la simulation de la plateforme logistique.
 */
class Simulation {
public:
    /**
     * Démarre la simulation.
     */
    void demarrer();

    /**
     * Ajoute un entrepôt à la simulation.
     * @param entrepot : Entrepôt à ajouter.
     */
    void ajouterEntrepot(const Entrepot& entrepot);

    /**
     * Ajoute un transporteur à la simulation.
     * @param transporteur : Transporteur à ajouter.
     */
    void ajouterTransporteur(const Transporteur& transporteur);

private:
    std::vector<Entrepot> entrepots;      ///< Liste des entrepôts.
    std::vector<Transporteur> transporteurs; ///< Liste des transporteurs.
};

#endif // SIMULATION_H
