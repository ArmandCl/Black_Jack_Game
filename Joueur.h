#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include <vector>

#include "Carte.h"

enum Choix {
    TIRER,   // Tirer une carte
    ARRETER, // Arrêter (finir le tour)
    SPLIT,   // Split (séparer les cartes en deux mains)
    DOUBLER  // Doubler la mise
};


class Joueur 
{
private:
    std::string name;  
    std::vector<Carte> hand;
    int chips;
    Choix choix; // Choix du joueur


public:
    Joueur(std::string name, std::vector<Carte> hand, int chips);
    
    // Gestion des cartes
    void ajouterCarte(const Carte& nouvelleCarte);
    void viderMain();

    // Calcul
    int calculerScore() const;

    // Affichage
    void afficherNom() const;
    void afficherMain() const;
    void afficherScore() const;

    // Gestion des jetons
    void miserJetons(int montant);
    void gagnerJetons(int montant);
    int getJetons() const;

    //Action du joueur
    void setChoix(Choix nouveauChoix);
    Choix getChoix() const;

    // Vérifications
    bool mainEstVide() const;
    int getPlayerHandSize() const;

};

#endif // JOUEUR_H