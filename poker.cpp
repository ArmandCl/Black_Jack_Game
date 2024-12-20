#include <vector>
#include <string>
#include <array>
#include <iostream>
#include <cstdlib>  // pour srand() et rand()
#include <ctime>    // pour time()

// Définir la structure Card
struct Card {
    std::string color;  // Exemple : "Heart", "Diamond", etc.
    int value;         // De 1 (As) à 13 (Roi)
};

// Définition de la structure des joueurs
struct Player
{
    std::string player_name;  
    std::array<Card, 2> player_hand; // Tableau fixe pour deux cartes

};


// Initialiser le deck
void initializeDeck(std::vector<Card>& deck) {
    std::string colors[] = {"Heart", "Spade", "Diamond", "Club"};
    for (const auto& color : colors) {
        for (int value = 1; value <= 13; ++value) {
            deck.push_back({color, value});
        }
    }
}

// Afficher une carte
void displayCard(const Card& card) {
    std::cout << card.value << " of " << card.color;
}

// Afficher le deck
void displayDeck(const std::vector<Card>& deck) {
    for (const auto& card : deck) {
        displayCard(card);
        std::cout << std::endl;
    }
}

void displayPlayerHand(Player player){
    std::cout << "Player: " << player.player_name << std::endl;
    for (const auto& card : player.player_hand) {
        displayCard(card);
        std::cout << std::endl;
    }
}


Card drawRandomCard(std::vector<Card>& deck) {
    int randomIndex = std::rand() % deck.size();  // Générer un index aléatoire
    Card drawnCard = deck[randomIndex];            // Sélectionner la carte correspondante
    deck.erase(deck.begin() + randomIndex);        // Retirer la carte du deck
    return drawnCard;
}

int main() {
    
    srand((unsigned) time(NULL));
    // Créer un vecteur pour stocker le deck
    std::vector<Card> deck;
    
    // Initialiser le deck
    initializeDeck(deck);


    Player player_1 = {"Armand", {drawRandomCard(deck), drawRandomCard(deck)}};


    // Afficher le deck
    displayDeck(deck);

    displayPlayerHand(player_1);

    //Card carte_test = drawRandomCard(deck);
    //displayCard(carte_test);

    return 0;
}
