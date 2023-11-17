#include <iostream>
#include <vector>
#include "Players.h"
#include "PlayerStats.h"

using namespace std;

class ComparePlayers{
public:

      ComparePlayers(const string& player1Name, const string player1Matchup, const string& player2Name, const string player2Matchup){
          Player player1(player1Name,player1Matchup);
          Player player2(player2Name, player2Matchup);
        cout << "Comparing players: " << player1.getName() << " and " << player2.getName() << "." << endl;

        if (player1.getExpAvg() > player2.getExpAvg()) {
            cout << player1.getName() << " has a higher score than " << player2.getName() << "." << endl;
        }
        else if (player1.getExpAvg() < player2.getExpAvg()) {
            cout << player2.getName() << " is projected to score more than " << player1.getName() << "." << endl;
        }
        else {
            cout << "Both players have the same projected point total this week" << endl;
        }
    }
};
