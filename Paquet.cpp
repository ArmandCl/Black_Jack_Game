#include <algorithm>
#include <random>
#include <string>
#include <iostream>
#include <vector>
#include "Carte.h"
#include "Paquet.h"

// Constructeur : initialise et mélange le paquet
Paquet::Paquet()
{
    initialiserPaquet();
    melanger();
}

void Paquet::initialiserPaquet()
{
    std::string colors[] = {"Heart", "Spade", "Diamond", "Club"};
    std::string values[] = {"As", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

    for (int nbr_paquet = 0; nbr_paquet < 6; ++nbr_paquet)
    { // 6 paquets de cartes on fait la regle des casino
        for (const auto &color : colors)
        {
            for (int value = 0; value < 13; ++value)
            {                                                  // 0 correspond à "As" dans le tableau values
                cartes.push_back(Carte(color, values[value])); // Appel du constructeur Carte
            }
        }
    }
}

void Paquet::melanger()
{
    std::random_device random_number; // Graine pour le générateur aléatoire
    std::mt19937 g(random_number());  // Générateur aléatoire basé sur Mersenne Twister
    std::shuffle(cartes.begin(), cartes.end(), g);
}

Carte Paquet::tirerCarte()
{
    int randomIndex = std::rand() % cartes.size(); // Générer un index aléatoire
    Carte drawedCard = cartes[randomIndex];        // Sélectionner la carte correspondante
    cartes.erase(cartes.begin() + randomIndex);    // Retirer la carte du deck
    return drawedCard;
}

bool Paquet::estVide() const
{
    return cartes.empty();
}

int Paquet::getTaillePaquet() const
{
    return cartes.size();
}

void Paquet::displayPaquet() const
{
    for (const Carte &carte : cartes)
    {                        // Parcourir toutes les cartes
        carte.displayCard(); // Afficher chaque carte
    }
}
