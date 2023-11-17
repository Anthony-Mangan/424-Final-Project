#ifndef PLAYERSTATS_H
#define PLAYERSTATS_H
#include <iostream>
#include <vector>
#include "Rankings.h"
#include "Players.h"



class PlayerStats {

public:
	struct stats {
		string playerName;
		string playerTeam;
		string playerPosition;
		int gamesPlayed;
		double SeasonTotal;
		double SeasonAverage;
		//double QBSeasonTotal;
		//double QBSeasonAvg;
		//double RBSeasonTotal;
		//double RBSeasonAvg;
		//double WRSeasonTotal;
		//double WRSeasonAvg;
		//double TESeasonTotal;
		//double TESeasonAvg;
		//double KSeasonTotal;
		//double KSeasonAvg;
		//double DSTSeasonTotal;
		//double DSTSeasonAvg;
	};

	vector<stats> stat;

	void addPlayers(const string& Name, const string& Team, const string& Position, int Games, double Total, double Average) {
		stat.push_back({  Name, Team, Position, Games, Total, Average });
	}
	const vector<stats>& getStats() const {
		return stat;
	}
	void displayQBPoints() {

	}
};

#endif
