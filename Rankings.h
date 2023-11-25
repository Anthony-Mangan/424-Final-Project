#ifndef RANKINGS_H
#define RANKINGS_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Rankings {

public:
	struct Team {
		string name;
		string abbr;
		double QBranking;
		double averagePointsQBAllowed;
		double RBranking;
		double averagePointsRBAllowed;
		double WRranking;
		double averagePointsWRAllowed;
		double TEranking;
		double averagePointsTEAllowed;
		double Kranking;
		double averagePointsKAllowed;
		double DSTranking;
		double averagePointsDSTAllowed;
		double matchupStrength;
	};

	vector<Team> teams;

	void addTeams(const string& teamName, const string& teamAbbr, double teamQBRanking, double teamAverageQBPoints, double teamRBRanking, double teamAverageRBPoints, double teamWRRanking, double teamAverageWRPoints, double teamTERanking, double teamAverageTEPoints, double teamKRanking, double teamAverageKPoints, double teamDSTRanking, double teamAverageDSTPoints, double matchupStrength) {
		teams.push_back({ teamName, teamAbbr, teamQBRanking, teamAverageQBPoints,teamRBRanking, teamAverageRBPoints,teamWRRanking, teamAverageWRPoints,teamTERanking, teamAverageTEPoints,teamKRanking, teamAverageKPoints,teamDSTRanking, teamAverageDSTPoints, matchupStrength });
	}

	void displayQB() const {
		vector<Team> sortedTeams = teams;
		sort(sortedTeams.begin(), sortedTeams.end(), [](const Team& a, const Team& b) {
			return a.QBranking < b.QBranking;
			});

		cout << "Team\t\t\tRanking\tAverage Points Allowed\tPrevious Matchup Strength\n";
		cout << "------------------------------------------------\n";
		for (const Team& team : sortedTeams) {
			cout << left << setw(25) << team.name << "\t" << setw(8) << team.QBranking << "\t" << team.averagePointsQBAllowed << "\t" << team.matchupStrength << "\n";
		}
	}

	// Get function for teams
	const vector<Team>& getTeams() const {
		return teams;
	}
};

#endif
		