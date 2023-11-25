#include <iostream>
#include <iomanip>
#include <string>
#include "Players.h"
#include "ComparePlayers.h"
#include "Rankings.h"

using namespace std;

string player1name;
string player1matchup;
string player2name;
string player2matchup;

int main() {
    cout<< "Enter Player 1 Name: ";
    getline(cin, player1name);
    cout << "Enter Player 1 Matchup: ";
    getline(cin, player1matchup);
    cout << "Enter Player 2 Name: ";
    getline(cin, player2name);
    cout << "Enter Player 2 Matchup: ";
    getline(cin, player2matchup);
	Player player1(player1name,player1matchup);
    Player player2(player2name,player2matchup);
    ComparePlayers p12(player1,player2);

    
    return 0;
 


        /* Input player information
        cout << "Enter player name: ";
        getline(cin, playerName);

        cout << "Enter player matchup: ";
        getline(cin, playerMatchup);

        */
};



