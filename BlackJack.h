void distribuerCartesInitiales(Joueur& joueur, Paquet& deck) {
    joueur.recevoirCarte(deck.tirerCarte());
    joueur.recevoirCarte(deck.tirerCarte());
}
