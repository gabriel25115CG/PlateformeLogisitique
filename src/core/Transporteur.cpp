#include "Transporteur.h"

Transporteur::Transporteur(int capacite) : capaciteMax(capacite) {}

int Transporteur::getCapacite() const {
    return capaciteMax;
}

void Transporteur::setDestination(const std::string& destination) {
    this->destination = destination;
}

std::string Transporteur::getDestination() const {
    return destination;
}
