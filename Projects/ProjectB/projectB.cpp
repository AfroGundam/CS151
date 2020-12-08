#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
using std::vector;
using std::string;


enum Rank{ ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};
enum Suit{ SPADES, HEARTS, DIAMONDS, CLUBS};


struct Card
{
    Suit suit;
    Rank rank;
    int num_suits = 4;
    int num_ranks = 13;
};

struct Deck
{
    vector<Card> cards;
    string card_back;
    int count;
    int max = 52;
};

struct Shore
{
    int count;
    Card* played;
    int* books;
    int n_books;
};

struct Hand
{
    Card* CARDS;
    int count;
};

class Player
{
    Hand HAND;
    Shore field;
};

class Game
{
    Deck CARDS;
    Player players[4];
};

void initialize(Deck&);
void print_card(const Card&);
void print_deck(const Deck&);
void shuffle(Deck&);

int main()
{
    Deck game_deck;
    initialize(game_deck);
    print_deck(game_deck);
    shuffle(game_deck);
    cout<<endl;
    print_deck(game_deck);
};

void initialize(Deck& deck)
{
    Card card;
    for(int suit = 0; suit < card.num_suits; suit++)
    {
        for(int rank = 0; rank < card.num_ranks; rank++)
        {
            card.suit = Suit(suit);
            card.rank = Rank(rank);
            deck.cards.push_back(card);
        }
    }
}

void print_card(const Card& card)
{
    cout<<"Rank = "<< card.rank<<"  "<<"Suit = "<< card.suit << endl;
}

void print_deck(const Deck& deck)
{
    for (Card c : deck.cards)
    {
        print_card(c);
    }
}



void shuffle(Deck& deck)
{
    Deck shuffled;
    while(!deck.cards.empty())
    {
        size_t rand_index = rand() % deck.cards.size();
        shuffled.cards.push_back(deck.cards[rand_index]);
        deck.cards.erase(deck.cards.begin() + rand_index);

    }

    deck = shuffled;
}