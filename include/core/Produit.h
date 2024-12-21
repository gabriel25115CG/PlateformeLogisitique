#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>

/**
 * Classe Produit : représente un produit stocké dans l'entrepôt.
 */
class Produit {
public:
    /**
     * Constructeur : initialise un produit avec une référence et une quantité.
     * @param reference : Référence unique du produit.
     * @param quantite : Quantité du produit.
     */
    Produit(const std::string& reference, int quantite);

    /**
     * Accesseur pour la référence.
     * @return Référence du produit.
     */
    std::string getReference() const;

    /**
     * Accesseur pour la quantité.
     * @return Quantité du produit.
     */
    int getQuantite() const;

private:
    std::string reference; ///< Référence unique du produit.
    int quantite;          ///< Quantité disponible.
};

#endif // PRODUIT_H
