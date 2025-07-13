#include <iostream>
#include "Paquet.h"
#include "Joueur.h"
using namespace std;

#define INITALEPLAYERCHIPS 100
#define BANKCHIPS 1000000000 // 1 MILLIARD DE JETON DANS LA BANQUE (CROUPIER)

int main()
{
  Paquet deck;

  ////Initialisation du croupier////
  vector<Carte> mainCroupier;
  mainCroupier.push_back(deck.tirerCarte());
  mainCroupier.push_back(deck.tirerCarte());
  Joueur croupier("croupier", mainCroupier, INITALEPLAYERCHIPS, 0, WAIT);

  ////Initialisation des joueurs////
  int nombre_joueur;
  cout << "Nombre de joueur : ";
  cin >> nombre_joueur;
  std::vector<Joueur> joueurs; // vecteur dans lequel on va ranger tout les joueurs

  for (int i = 0; i < nombre_joueur; i++)
  {
    // création de la main du joueur
    vector<Carte> mainJoueur;
    mainJoueur.push_back(deck.tirerCarte());
    mainJoueur.push_back(deck.tirerCarte());

    // Création des joueurs 1 à 1 puis insertion dans le vecteur joueurs grace à emplace_back
    joueurs.emplace_back(
        "joueur" + std::to_string(i + 1), // Nom (joueur1, joueur2...)
        mainJoueur,                       // Main du joueur
        INITALEPLAYERCHIPS,               // Chips initiales
        0,                                // Mise du joueur (0 par défaut)
        Action::WAIT                      // Action par défaut
    );

    joueurs[i].afficherNom();
    joueurs[i].afficherMain();
    joueurs[i].afficherScore();
    joueurs[i].afficherMise();
  }

  deck.displayPaquet();

  return 0;
}