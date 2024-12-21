#include "Produit.h"

Produit::Produit(const std::string& reference, int quantite)
    : reference(reference), quantite(quantite) {}

std::string Produit::getReference() const {
    return reference;
}

int Produit::getQuantite() const {
    return quantite;
}
