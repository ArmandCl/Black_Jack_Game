#ifndef PAQUET_H
#define PAQUET_H

#include <vector>
#include "Carte.h"

class Paquet {
public:
    Paquet();
    void melanger();
    Carte tirerCarte();
    bool estVide() const;
    int getTaille() const;

private:
    std::vector<Carte> cartes;
    void initialiserPaquet();
};

#endif // PAQUET_H