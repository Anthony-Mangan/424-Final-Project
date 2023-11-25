#include <iostream>
#include <vector>
#include "Players.h"
#include "PlayerStats.h"

using namespace std;
double value1;
double value2;
class ComparePlayers{
public:

      ComparePlayers(Player player1, Player player2){
          //Player player1(player1Name,player1Matchup);
        //  Player player2(player2Name, player2Matchup);
        cout << "Comparing players: " << player1.getName() << " and " << player2.getName() << "." << endl;
        value1 = player1.displayExpectation();
        value2 = player2.displayExpectation();
        if (player1.getExpAvg() > player2.getExpAvg()) {
            cout << player1.getName() << " is projected to score more than " << player2.getName() << "." << " I would recommend starting " << player1.getName() << "!" << endl;
        }
        else if (player1.getExpAvg() < player2.getExpAvg()) {
            cout << player2.getName() << " is projected to score more than " << player1.getName() << "." << " I would recommend starting " << player2.getName() << "!" << endl;
        }
        else {
            cout << "Both players have the same projected point total this week" << endl;
        }
    }
};
