#ifndef PAQUET_H
#define PAQUET_H

#include <vector>
#include "Carte.h"

class Paquet 
{
private:
    std::vector<Carte> cartes;
    void initialiserPaquet();

public:
    Paquet();
    void melanger();
    Carte tirerCarte();
    bool estVide() const;
    int getTaille() const;


};

#endif // PAQUET_H