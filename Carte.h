#ifndef CARTE_H
#define CARTE_H

#include <string>

class Carte
{
private:
    std::string color;  // Exemple : "Heart", "Diamond", etc.
    std::string value;         // De 1 (As) à 10 puis jusqu'à Roi (Roi)

public:
    Carte(std::string color, std::string value); //Méthode constructeur

    //Getter
    std::string getColor() const;
    std::string getValue() const;

    //Afficher une carte
    void displayCard() const;
    std::string toString() const;

};


#endif