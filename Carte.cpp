#include <string>
#include <iostream>
#include "Carte.h"


Carte::Carte(std::string color, std::string value) : color(color), value(value) {}


//Getter
std::string Carte::getColor() const{
    return color;
}

std::string Carte::getValue() const{
    return value;
}


//Affichage
void Carte::displayCard(const Carte& carte) const{
    std::cout << carte.value << " of " << carte.color;
}

std::string Carte::toString() const{
    return value + " of " + color;
}