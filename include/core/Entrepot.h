#ifndef ENTREPOT_H
#define ENTREPOT_H

#include <vector>
#include "Produit.h"

/**
 * Classe Entrepot : représente un entrepôt logistique.
 */
class Entrepot {
public:
    /**
     * Constructeur : initialise un entrepôt avec une capacité donnée.
     * @param capacite : Capacité maximale de stockage.
     */
    Entrepot(int capacite);

    /**
     * Ajoute un produit dans l'entrepôt.
     * @param produit : Produit à ajouter.
     * @return True si le produit a été ajouté, False si l'entrepôt est plein.
     */
    bool ajouterProduit(const Produit& produit);

    /**
     * Récupère la liste des produits stockés.
     * @return Vector contenant tous les produits.
     */
    const std::vector<Produit>& getProduits() const;

private:
    int capaciteMax;                 ///< Capacité maximale de l'entrepôt.
    std::vector<Produit> produits;  ///< Liste des produits stockés.
};

#endif // ENTREPOT_H
