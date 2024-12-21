#include "Entrepot.h"

Entrepot::Entrepot(int capacite) : capaciteMax(capacite) {}

bool Entrepot::ajouterProduit(const Produit& produit) {
    if (produits.size() < static_cast<size_t>(capaciteMax)) {
        produits.push_back(produit);
        return true;
    }
    return false; // Entrepôt plein
}

const std::vector<Produit>& Entrepot::getProduits() const {
    return produits;
}
