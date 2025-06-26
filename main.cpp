#include <iostream> 
#include "Paquet.h"
#include "Joueur.h"
using namespace std;


#define INITALEPLAYERCHIPS 100


 int main()
 {
   Paquet deck;

   vector<Carte> mainJoueur1;
   mainJoueur1.push_back(deck.tirerCarte());
   mainJoueur1.push_back(deck.tirerCarte());

   Joueur joueur1("joueur1",mainJoueur1,INITALEPLAYERCHIPS,0,WAIT);
   joueur1.afficherNom();
   joueur1.afficherMain();
   joueur1.afficherScore();
   joueur1.afficherMise();

   deck.displayPaquet();

   return 0;
 }