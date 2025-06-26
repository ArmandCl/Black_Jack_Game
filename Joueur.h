#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include <vector>

#include "Carte.h"

enum Action {
    WAIT,     // Pour quand on initialise le joueur dans main
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
    int mise;
    Action action; // Acti du joueur


public:
    Joueur(std::string name, std::vector<Carte> hand, int chips, int mise, Action action);
    
    // Gestion des cartes
    void ajouterCarte(const Carte& nouvelleCarte);
    void viderMain();

    // Calcul
    int calculerScore() const;

    // Affichage
    void afficherNom() const;
    void afficherMain() const;
    void afficherScore() const;
    void afficherMise() const;

    //Getter
    std::string getNom() const;
    std::vector<Carte> getMain() const;
    int getChips() const;
    int getMise() const;
    Action getAction() const;
    int getPlayerHandSize() const;


    // Gestion des jetons
    void miserJetons(int montant);
    void gagnerJetons(int montant);

    //Action du joueur
    void setAction(Action nouvelleAction);

    // Vérifications
    bool mainEstVide() const;

};

#endif // JOUEUR_H