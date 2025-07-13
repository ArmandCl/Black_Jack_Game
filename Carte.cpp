#include <string>
#include <iostream>
#include "Carte.h"

Carte::Carte(std::string color, std::string value) : color(color), value(value) {}

// Getter
std::string Carte::getColor() const
{
    return color;
}

std::string Carte::getValue() const
{
    return value;
}

// Affichage
void Carte::displayCard() const
{
    std::cout << value << " of " << color << std::endl;
}

std::string Carte::toString() const
{
    return value + " of " + color;
}