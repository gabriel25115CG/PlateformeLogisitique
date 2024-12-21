#ifndef TRANSPORTEUR_H
#define TRANSPORTEUR_H

#include <string>

/**
 * Classe Transporteur : représente un véhicule de transport.
 */
class Transporteur {
public:
    /**
     * Constructeur : initialise un transporteur avec une capacité donnée.
     * @param capacite : Capacité maximale de transport.
     */
    Transporteur(int capacite);

    /**
     * Accesseur pour la capacité.
     * @return Capacité maximale du transporteur.
     */
    int getCapacite() const;

    /**
     * Définit la destination du transporteur.
     * @param destination : Destination à atteindre.
     */
    void setDestination(const std::string& destination);

    /**
     * Accesseur pour la destination.
     * @return Destination actuelle du transporteur.
     */
    std::string getDestination() const;

private:
    int capaciteMax;       ///< Capacité maximale du transporteur.
    std::string destination; ///< Destination actuelle.
};

#endif // TRANSPORTEUR_H
