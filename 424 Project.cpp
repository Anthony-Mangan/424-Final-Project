#include <iostream>
#include <iomanip>
#include <string>
#include "Players.h"
#include "ComparePlayers.h"
#include "Rankings.h"

using namespace std;

int main() {
	Player player1("Tyreek Hill", "New York Jets");
    Player player2("Davante Adams", "Denver Broncos");
    ComparePlayers p12("Tyreek Hill", "New York Jets", "Davante Adams", "Denver Broncos");
   // player1.displayInfo();

  //  QBRankings teamStats;

    // Add teams to the class
   // teamStats.addQB("Buffalo Bills", 3, 12.8);
   // teamStats.addQB("Los Angeles Chargers", 31, 20.9);
  //  teamStats.addQB("Atlanta Falcons", 30, 19.4);
    player1.displayExpectation();
    player2.displayExpectation();
    // ... (continue adding teams)

    // Display the team information
    //teamStats.displayQB();
    return 0;
    /*
        string playerName, playerPosition, playerTeam, playerMatchup;
        double playerTotalPoints;
        int playerGamesPlayed;

        // Input player information
        cout << "Enter player name: ";
        getline(cin, playerName);

        cout << "Enter player position: ";
        getline(cin, playerPosition);

        cout << "Enter player team: ";
        getline(cin, playerTeam);

        cout << "Enter player matchup: ";
        getline(cin, playerMatchup);

        cout << "Enter total points on the season: ";
        cin >> playerTotalPoints;

        cout << "Enter games played: ";
        cin >> playerGamesPlayed;

        // Create Player object
        Player player(playerName, playerPosition, playerTeam, playerMatchup, playerTotalPoints, playerGamesPlayed);

        // Display player information and expectation
        cout << "\nPlayer Information:\n";
        player.displayInfo();

        cout << "\nExpectation:\n";
        player.displayExpectation();

        return 0;
        */

};



