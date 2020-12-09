#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;
using std::vector;
using std::string;


enum Rank{ TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};
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

struct Player
{
    vector<Card> hand;
    vector<Card> shore;
    string name;
    int fly = 0;
};

struct Game
{
    vector<Player> players;
    Deck deck;
    int nPlayers = 4;
    int InitHandCount = 7;
};

void initialize(Game&);
void initialize(Deck&);
void print_card(const Card&);
void print_deck(const Deck&);
void shuffle(Deck&);
bool deal_cards(Game&);
void print_hand(const vector<Card>&);
void print_shore(const vector<Card>&);
void add_players(Game&);
void play(Game&);
Rank get_rank(const vector<Card>&);
bool is_match(const vector<Card>&, Rank);
void take_card(Game&,size_t,size_t,Rank);
void play_card(Game&,vector<Card>&, size_t, int);
bool draw_card(Game&,vector<Card>&, size_t, int);
void bait_card(Game&,vector<Card>&, size_t, size_t, int);
void check_fly(Player&);
void GameOver(Game&);


int main()
{
    Game game;
    char ready;
    cout<<"GO FLY FISHING!"<<endl;
    cout<<endl<<"The objective is to get the most flies possible."<<endl;
    cout<<"To create a fly, a player must play a card from their hand onto their shore."<<endl;
    cout<<"Flies are created when 2 matching ranks are on the same shore"<<endl;
    cout<<"Players are able to 'bait', or steal, any card from an opponent's shore"<<endl;
    cout<<"The game ends when any given player is out of cards, and the player with the most flies wins!"<<endl;
    cout<<endl<<"Are you ready to play?"<<endl;
    cout<<"(Y/N)";
    cin>>ready;
    if (ready == 'y' || ready == 'Y')
    {
        play(game);
    }
    else
    {
        exit;
    }
    
}

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
    //cout<<"Rank = "<< card.rank<<"  "<<"Suit = "<< card.suit << endl;
    switch(card.rank)
    {
        case 0:
            cout<<"TWO";
        break;
        case 1:
            cout<<"THREE";
        break;
        case 2:
            cout<<"FOUR";
        break;
        case 3:
            cout<<"FIVE";
        break;
        case 4:
            cout<<"SIX";
        break;
        case 5:
            cout<<"SEVEN";
        break;
        case 6:
            cout<<"EIGHT";
        break;
        case 7:
            cout<<"NINE";
        break;
        case 8:
            cout<<"TEN";
        break;
        case 9:
            cout<<"JACK";
        break;
        case 10:
            cout<<"QUEEN";
        break;
        case 11:
            cout<<"KING";
        break;
        case 12:
            cout<<"ACE";
        break;
    }

    cout<<" of ";

    switch(card.suit)
    {
        case 0:
            cout<< "SPADES";
        break;
        case 1:
            cout<< "HEARTS";
        break;
        case 2:
            cout<< "DIAMONDS";
        break;
        case 3:
            cout<< "CLUBS";
        break;
    }
    cout<<endl;
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

bool deal_cards(Game& game)
{
    if (game.deck.cards.size() < game.nPlayers * game.InitHandCount)
    {
        return false;
    }

    for(int card = 0; card < game.InitHandCount; card++)
    {
        for(int player = 0; player < game.nPlayers; player++)
        {
            game.players[player].hand.push_back(game.deck.cards[0]);
            game.deck.cards.erase(game.deck.cards.begin());

        }
    }

    return true;
}

void print_hand(const vector<Card>& hand)
{
    int i = 0;
    for (Card c : hand)
    {
        cout<<"("<<i<<") ";
        print_card(c);
        i++;
    }
}

void print_shore(const vector<Card>& shore)
{
    for (Card c : shore)
    {
        print_card(c);
    }
}

void print_shore_take(const vector<Card>& shore)
{
    int i = 0;
    for (Card c : shore)
    {
        cout<<"("<<i<<") ";
        print_card(c);
        i++;
    }
}

void initialize(Game& game)
{
    initialize(game.deck);
    shuffle(game.deck);
    add_players(game);

}

void add_players(Game& game)
{
    for(int player = 0; player < game.nPlayers; player++)
    {
        Player new_player;
        game.players.push_back(new_player);

    }
}

Rank get_rank(const vector<Card>& hand)
{
    bool valid = false;
    int rank;
    while(!valid)
    {
        cout<<"Enter a rank: ";
        cin >> rank;

        for(Card c : hand)
        {
            if (c.rank == Rank(rank))
            {   
                valid = true;
            }
        }
    }

    return Rank(rank);
}

bool is_match(const vector<Card>& hand, Rank chosen_rank)
{
    bool match = false;
    for(Card c : hand)
    {
        if (c.rank == chosen_rank)
        {
            match = true;
        }
    }

    return match;
}

void take_card(Game& game, size_t current_player, size_t chosen_player, Rank chosen_rank)
{


    bool taken = false;
    size_t card_index = 0;
    while(!taken)
    {
        Card current_card = game.players[chosen_player].hand[card_index];
        if(current_card.rank == chosen_rank)
        {
            game.players[current_player].hand.push_back(current_card);
            game.players[chosen_player].hand.erase(game.players[chosen_player].hand.begin() + card_index);
            taken = true;
        }
        card_index ++;
    }

}

void play_card(Game& game, vector<Card>& hand, size_t current_player, int choice)
{
    bool played = false;
    while(!played)
    {
        Card current_card = game.players[current_player].hand[choice];
        game.players[current_player].shore.push_back(current_card);
        game.players[current_player].hand.erase(game.players[current_player].hand.begin()+choice);

        played = true;
    }    
}

void bait_card(Game& game, vector<Card>& shore, size_t current_player, size_t chosen_player, int choice)
{
    Card in_question = game.players[chosen_player].shore[choice];
    game.players[current_player].shore.push_back(in_question);
    game.players[chosen_player].shore.erase(game.players[chosen_player].shore.begin()+choice);
}

bool draw_card(Game& game ,vector<Card>& hand, size_t player, int draw)
{
        while(draw>0)
        {
            if (game.deck.cards.size() < draw)
            {

                cout<<endl<<"Deck is empty!"<<endl;

                return false;
            }
            else
            {
                game.players[player].hand.push_back(game.deck.cards[0]);
                game.deck.cards.erase(game.deck.cards.begin());
                draw--;
            }
        }

    return true;
}

void check_fly(Player& player)
{
    vector<bool> marked(player.shore.size(),false);
    for(int i = 0; i < player.shore.size() - 1 ; i++)
    {
        for(int j = i + 1; j < player.shore.size(); j++)
        {
            if (!marked[i] && !marked[j] && player.shore[i].rank == player.shore[j].rank)
            {
                marked[i] = true;
                marked[j] = true;
                player.fly++;
                cout<<endl<<"* * * FLY CREATED! * * *"<<endl;
            }
        }
    }

    int card = 0;
    while(!player.shore.empty() && card < marked.size())
    {
        if(marked[card])
        {
            player.shore.erase(player.shore.begin() + card);
            marked.erase(marked.begin() + card);
        }
        else
        {
            card++;
        }
        
    }
}

void play(Game& game)
{
    srand(time(NULL));
    initialize(game);
    deal_cards(game);
    
    cout<<"* * * * * * * * * * *"<<endl;
    cout<<"LET'S GO FLY FISHING!"<<endl;
    cout<<"* * * * * * * * * * *"<<endl;

    bool game_over = false;
    bool turn = true;
    int turn_count = 0;
    size_t player = 0;

    while(!game_over)
    {
        if(turn == true)
        {   
            turn_count ++;
            cout<<endl;
            cout<<"Turn "<<turn_count<<endl;
            cout<<endl;

            cout<<"Drawing card..."<<endl;
            draw_card(game, game.players[player].hand, player, 1);
            cout<<endl;
            
            cout<< "Your Shore: "<<endl;
            print_shore(game.players[player].shore);
            cout<<endl;

            cout<< "Opponent's Shores: "<<endl;
            for(int i = 1; i < game.nPlayers; i++)
            {
                cout<<"Opponent "<<i<<endl;
                print_shore(game.players[i].shore);
                cout<<endl;
            }
            cout<< "Current hand: "<<endl;
            print_hand(game.players[player].hand);
            
            bool chose = false;
            int choice;
            while(!chose)
            {
                cout<<endl;
                cout<< "Play a card onto your shore"<<endl;
                int hand_count = game.players[player].hand.size();
                cin >> choice;
                cout<<endl;
                if((choice > hand_count-1) || (choice < 0))
                {
                    cout<<"Invalid choice"<<endl<<endl;
                }
                else
                {
                    chose = true;
                }
            }

            play_card(game, game.players[player].hand, player, choice);

            cout<< "Opponent's Shores: "<<endl;
            for(int i = 1; i < game.nPlayers; i++)
            {
                cout<<"Opponent "<<i<<endl;
                print_shore(game.players[i].shore);
                if(game.players[i].shore.size() == 0)
                {
                    cout<<"Empty!"<<endl;
                }
                cout<<endl;
            }

            cout<< "Your Shore: "<<endl;
            print_shore(game.players[player].shore);
            if (game.players[player].shore.size() == 0)                
            {
                cout<<"Empty!"<<endl;
            }
            cout<<endl;

            
            int x = 0;
            for (int i = 1; i < game.nPlayers; i++)
            {
                if (game.players[i].shore.size() > 0)
                {
                    x++;
                }
            }

            if(x==0)
            {
                cout<<endl<<"No opponent has a populated shore. Your turn ends."<<endl;
                //turn = false;
            }

            if(x>0)
            {
                cout<< "Choose an opponent to take a card from their shore"<<endl;
                chose = false;
                size_t pChoice;
                while(!chose)
                {
                    cin>>pChoice;
                    if((pChoice > game.nPlayers) || (pChoice <= 0))
                    {
                        cout<<"Invalid choice"<<endl;
                    }
                    else
                    {
                        chose = true;
                    }
                }
                
                cout<< "Which card will you take?"<<endl;
                print_shore_take(game.players[pChoice].shore);
                chose = false;
                while(!chose)
                {
                    cin>>choice;
                    if((choice > game.players[pChoice].shore.size()) || (choice < 0))
                    {
                        cout<<"Invalid choice"<<endl;
                    }
                    else
                    {
                        chose = true;

                    }
                }

                bait_card(game, game.players[player].shore, player, pChoice, choice);
                cout<<endl;

                print_shore(game.players[player].shore);
                cout<<endl;
                
            }

            check_fly(game.players[player]);
            cout<<"Current Flies: "<<game.players[player].fly<<endl;

            if(game.players[player].hand.size() == 0)
            {
                game_over = true;
            }
        }

        
        for(size_t opp_turn = 1; opp_turn < game.nPlayers; opp_turn++)
        {
            player = opp_turn;
            draw_card(game, game.players[player].hand, player, 1);
            int choice = rand() % game.players[player].hand.size();
            play_card(game, game.players[player].hand, player, choice); 

            vector<bool> marked(player,false);
            for(int i = 0; i < game.nPlayers ; i++)
            {
                if(game.players[i].shore.size() > 0 && !marked[i])
                {
                    marked[i] = true;
                }
                else
                {
                    marked[i] = false;
                }
                
            }

            int chosen = rand() % marked.size();
            if(marked[chosen])  
            {
                cout<<endl<<"Opponent "<<opp_turn<<" is baiting from Player "<<chosen<<"!"<<endl;
                bait_card(game, game.players[player].shore, player, chosen, 0);
            }
            else
            {
                cout<<endl<<"Opponent "<<opp_turn<<" doesn't bait!"<<endl;
            }
            
            check_fly(game.players[player]);
            cout<<endl;
            cout<<endl<<"Opponent "<<opp_turn<<" has "<<game.players[player].fly<< " Flies!"<<endl<<endl;
            
            if(game.players[player].hand.size() == 0)
            {
                game_over = true;
            }
            
        }
        turn = true;
        player = 0;
    }

    GameOver(game);
}

void GameOver(Game& game)
{
    for(int player = 0; player < game.players.size(); player++)
    {
        cout<<"Player "<<player<<" caught "<< game.players[player].fly<<" flies"<< endl;
        cout<<"-----------------------"<<endl;
    }

    bool playWin = false;
    for(int i = 1; i<game.players.size(); i++)
    {
        if(game.players[0].fly > game.players[i].fly)
        {
            playWin = true;
        }
        else
        {
            bool playWin = false;
        }
        
    }

    if(playWin)
    {
        cout<<endl<<endl<<endl;
        cout<<"Congratulations! You've won!";
        cout<<endl<<endl<<endl;

    }
    else
    {
        cout<<endl<<endl<<endl;
        cout<<"Better luck next time!";
        cout<<endl<<endl<<endl;
    }
    
}











