#include <string>
#include <iostream>
#include <vector>
#include "Joueur.h"
#include "Carte.h"


Joueur::Joueur(std::string name, std::vector<Carte> hand, int chips, int mise, Action Action) : name(name), hand(hand),chips(chips), mise(mise), action(action) {}


////////    Gestion des cartes    ////////
void Joueur::ajouterCarte(const Carte& nouvelleCarte){
    hand.push_back(nouvelleCarte);
}

void Joueur::viderMain(){
    hand.clear();
}


////////    Calcul    ////////
int Joueur::calculerScore() const{
    //voir comment faire.
    //cette fonction semble être la meme que getChips parce que le score c'est juste l'entier "chips" donc à voir...
}


////////    Affichage    ////////
void Joueur::afficherNom() const{
    std::cout << name << std::endl;
}

void Joueur::afficherMain() const{
    for (const Carte& carte : hand) { // Parcourir la main du joueur
        carte.displayCard();          // Afficher chaque carte
    }
}

void Joueur::afficherScore() const{
    std::cout << chips << std::endl;
}

void Joueur::afficherMise() const{
    std::cout << mise << std::endl;
} 


////////    GETTER    ////////
 std::string Joueur::getNom() const{
    return name;
 }

 std::vector<Carte> Joueur::getMain() const{
    return hand;
 }

int Joueur::getChips() const{
    return chips;
}

int Joueur::getMise() const{
    return mise;
}

Action Joueur::getAction() const {
    return action;
}

int Joueur::getPlayerHandSize() const{
    return hand.size();
}


////////    Gestion des jetons    ////////
void Joueur::miserJetons(int montant){
    mise += montant;
}

void Joueur::gagnerJetons(int montant){
    chips += montant;
}


////////    Action du joueur   ////////
void Joueur::setChoix(Action nouvelleAction){
    action = nouvelleAction;
}


////////    Vérifications   ////////
bool Joueur::mainEstVide() const{
    //retourne True si c'est vide
    return hand.empty();
}
