#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <numeric>
#include "Rankings.h"
#include "PlayerStats.h"



using namespace std;
class Player : public Rankings {
protected:
    string name;
    string pteam;
    string matchup;

public:
    double expAvg;
    double getExpAvg() {
        return expAvg;
    }
    string getName() {
        return name; 
    }
    Player(const string& playerName,
        const string& playerMatchup)
        : name(playerName), matchup(playerMatchup) {
    }

    
    //double calculateAveragePoints() {
    //    if (gamesPlayed > 0) {
    //        return totalPoints / gamesPlayed;
    //    }
    //    else {
    //        return 0.0;
    //    }
    //}

   /* void displayInfo()  {
        cout << "Name: " << name << "\nPosition: "  << "\nTeam: " << pteam << "\nMatchup: " << matchup
            << "\nTotal Points: " << totalPoints << "\nGames Played: " << gamesPlayed
            << "\nAverage Points per Game: " << fixed << setprecision(2) << calculateAveragePoints() << endl;
    }*/

    void displayExpectation() {
       //double averagePoints = calculateAveragePoints();
       double currentAvg = 0.0;
       double PMSS = 0.0;
       string onTeam = " ";
       string currentPosition = " ";
       string tName = " ";
       Rankings teamStats;
       PlayerStats allPlayers;
       // QBs
       allPlayers.addPlayers("Josh Allen","(BUF)", "QB", 10, 235.7, 23.57);
       allPlayers.addPlayers("Jalen Hurts","(PHI)", "QB", 9, 213.6, 23.73333333);
       allPlayers.addPlayers("Sam Howell","(WAS)", "QB", 10, 191.8, 19.18);
       allPlayers.addPlayers("Justin Herbert","(LAC)", "QB", 9, 189.8, 21.08888889);
       allPlayers.addPlayers("Lamar Jackson","(BAL)", "QB", 10, 188.2, 18.82);
       allPlayers.addPlayers("Dak Prescott","(DAL)", "QB", 9, 184.2, 20.46666667);
       allPlayers.addPlayers("Joshua Dobbs","(MIN)", "QB", 10, 179.5, 17.95);
       allPlayers.addPlayers("Patrick Mahomes","(KC)", "QB", 9, 179.4, 19.93333333);
       allPlayers.addPlayers("C.J. Stroud","(HOU)", "QB", 9, 178.2, 19.8);
       allPlayers.addPlayers("Tua Tagovailoa","(MIA)", "QB", 9, 172.7, 19.18888889);
       allPlayers.addPlayers("Brock Purdy","(SF)", "QB", 9, 166.8, 18.53333333);
       allPlayers.addPlayers("Jared Goff","(DET)", "QB", 9, 164.3, 18.25555556);
       allPlayers.addPlayers("Jordan Love","(GB)", "QB", 9, 160.6, 17.84444444);
       allPlayers.addPlayers("Russell Wilson","(DEN)", "QB", 9, 157.3, 17.47777778);
       allPlayers.addPlayers("Kirk Cousins","(MIN)", "QB", 8, 154.9, 19.3625);
       allPlayers.addPlayers("Baker Mayfield","(TB)", "QB", 9, 154, 17.11111111);
       allPlayers.addPlayers("Joe Burrow","(CIN)", "QB", 9, 144.5, 16.05555556);
       allPlayers.addPlayers("Trevor Lawrence","(JAX)", "QB", 9, 129.1, 14.34444444);
       allPlayers.addPlayers("Geno Smith","(SEA)", "QB", 9, 128.8, 14.31111111);
       allPlayers.addPlayers("Derek Carr","(NO)", "QB", 10, 126.4, 12.64);
       allPlayers.addPlayers("Matthew Stafford","(LAR)", "QB", 8, 118.7, 14.8375);
       allPlayers.addPlayers("Mac Jones","(NE)", "QB", 10, 116.7, 11.67);
       allPlayers.addPlayers("Desmond Ridder","(ATL)", "QB", 9, 116.5, 12.94444444);
       allPlayers.addPlayers("Justin Fields","(CHI)", "QB", 6, 111.7, 18.61666667);
       allPlayers.addPlayers("Gardner Minshew","(IND)", "QB", 9, 103.3, 11.47777778);
       allPlayers.addPlayers("Zach Wilson","(NYJ)", "QB", 9, 100.9, 11.21111111);
       allPlayers.addPlayers("Bryce Young","(CAR)", "QB", 8, 98.9, 12.3625);
       allPlayers.addPlayers("Kenny Pickett","(PIT)", "QB", 9, 94.4, 10.48888889);
       allPlayers.addPlayers("Deshaun Watson","(CLE)", "QB", 6, 90.9, 15.15);
       allPlayers.addPlayers("Jimmy Garoppolo","(LV)", "QB", 6, 73.1, 12.18333333);
       allPlayers.addPlayers("Tyson Bagent","(CHI)", "QB", 5, 59.3, 11.86);
       allPlayers.addPlayers("Will Levis","(TEN)", "QB", 3, 43.3, 14.43333333);
       allPlayers.addPlayers("Taylor Heinicke","(ATL)", "QB", 3, 37.7, 12.56666667);
       allPlayers.addPlayers("Aidan O'Connell","(LV)", "QB", 4, 34.6, 8.65);
       allPlayers.addPlayers("P.J. Walker","(CLE)", "QB", 5, 24.8, 4.96);
       allPlayers.addPlayers("Kyler Murray","(ARI)", "QB", 1, 18.3, 18.3);

       // RBs
       allPlayers.addPlayers("Christian McCaffrey","(SF)", "RB", 9, 201.6, 22.4);
       allPlayers.addPlayers("Raheem Mostert","(MIA)", "RB", 9, 161.1, 17.9);
       allPlayers.addPlayers("Travis Etienne Jr.","(JAX)", "RB", 9, 155.8, 17.31111111);
       allPlayers.addPlayers("Brian Robinson Jr.","(WAS)", "RB", 10, 132.1, 13.21);
       allPlayers.addPlayers("Josh Jacobs","(LV)", "RB", 10, 130.5, 13.05);
       allPlayers.addPlayers("Kenneth Walker","(SEA)", "RB", 9, 127, 14.11111111);
       allPlayers.addPlayers("Zack Moss","(IND)", "RB", 9, 120, 13.33333333);
       allPlayers.addPlayers("Alvin Kamara","(NO)", "RB", 7, 118.3, 16.9);
       allPlayers.addPlayers("Bijan Robinson","(ATL)", "RB", 10, 116.5, 11.65);
       allPlayers.addPlayers("Derrick Henry","(TEN)", "RB", 9, 116.2, 12.91111111);
       allPlayers.addPlayers("Rachaad White","(TB)", "RB", 9, 115, 12.77777778);
       allPlayers.addPlayers("D'Andre Swift","(PHI)", "RB", 9, 115, 12.77777778);
       allPlayers.addPlayers("Gus Edwards","(BAL)", "RB", 10, 114.8, 11.48);
       allPlayers.addPlayers("Breece Hall","(NYJ)", "RB", 9, 107.7, 11.96666667);
       allPlayers.addPlayers("Jahmyr Gibbs","(DET)", "RB", 7, 107.1, 15.3);
       allPlayers.addPlayers("Joe Mixon","(CIN)", "RB", 9, 106.3, 11.81111111);
       allPlayers.addPlayers("James Cook","(BUF)", "RB", 10, 105.7, 10.57);
       allPlayers.addPlayers("Rhamondre Stevenson","(NE)", "RB", 10, 105.1, 10.51);
       allPlayers.addPlayers("Kyren Williams","(LAR)", "RB", 6, 104.6, 17.43333333);
       allPlayers.addPlayers("Isiah Pacheco","(KC)", "RB", 9, 104.5, 11.61111111);
       allPlayers.addPlayers("Jerome Ford","(CLE)", "RB", 9, 101.8, 11.31111111);
       allPlayers.addPlayers("David Montgomery","(DET)", "RB", 6, 99.7, 16.61666667);
       allPlayers.addPlayers("Tony Pollard","(DAL)", "RB", 9, 98.4, 10.93333333);
       allPlayers.addPlayers("De'Von Achane","(MIA)", "RB", 4, 97.2, 24.3);
       allPlayers.addPlayers("Austin Ekeler","(LAC)", "RB", 6, 97, 16.16666667);
       allPlayers.addPlayers("Saquon Barkley","(NYG)", "RB", 7, 94.8, 13.54285714);
       allPlayers.addPlayers("Alexander Mattison","(MIN)", "RB", 10, 90.5, 9.05);
       allPlayers.addPlayers("Jaylen Warren","(PIT)", "RB", 9, 85.7, 9.522222222);
       allPlayers.addPlayers("Najee Harris","(PIT)", "RB", 9, 84.9, 9.433333333);
       allPlayers.addPlayers("Javonte Williams","(DEN)", "RB", 8, 79, 9.875);
       allPlayers.addPlayers("Tyler Allgeier","(ATL)", "RB", 10, 74.5, 7.45);
       allPlayers.addPlayers("Jonathan Taylor","(IND)", "RB", 6, 72, 12);
       allPlayers.addPlayers("D'Onta Foreman","(CHI)", "RB", 6, 70.7, 11.78333333);
       allPlayers.addPlayers("Kareem Hunt","(CLE)", "RB", 7, 67.6, 9.657142857);
       allPlayers.addPlayers("Aaron Jones","(GB)", "RB", 6, 64.7, 10.78333333);
       allPlayers.addPlayers("Antonio Gibson", "(WAS)", "RB", 10, 63.6, 6.36);
       allPlayers.addPlayers("Ezekiel Elliott","(NE)", "RB", 10, 62.9, 6.29);
       allPlayers.addPlayers("James Conner","(ARI)", "RB", 6, 62.7, 10.45);
       allPlayers.addPlayers("Chuba Hubbard","(CAR)", "RB", 9, 62.6, 6.955555556);
       allPlayers.addPlayers("AJ Dillon","(GB)", "RB", 9, 61, 6.777777778);
       allPlayers.addPlayers("Jaleel McLaughlin","(DEN)", "RB", 9, 59.5, 6.611111111);
       allPlayers.addPlayers("Tyjae Spears","(TEN)", "RB", 9, 59, 6.555555556);
       allPlayers.addPlayers("Devin Singletary","(HOU)", "RB", 9, 56.4, 6.266666667);
       allPlayers.addPlayers("Justice Hill","(BAL)", "RB", 9, 56, 6.222222222);
       allPlayers.addPlayers("Latavius Murray","(BUF)", "RB", 10, 54, 5.4);
       allPlayers.addPlayers("Dameon Pierce","(HOU)", "RB", 7, 51.6, 7.371428571);
       allPlayers.addPlayers("Joshua Kelley","(LAC)", "RB", 9, 48.5, 5.388888889);
       allPlayers.addPlayers("Khalil Herbert","(CHI)", "RB", 5, 46.5, 9.3);
       allPlayers.addPlayers("Samaje Perine","(DEN)", "RB", 9, 46.2, 5.133333333);
       allPlayers.addPlayers("Miles Sanders","(CAR)", "RB", 8, 46.2, 5.775);
       allPlayers.addPlayers("Kenneth Gainwell","(PHI)", "RB", 8, 44.4, 5.55);
       allPlayers.addPlayers("Jerick McKinnon","(KC)", "RB", 9, 43.5, 4.833333333);
       allPlayers.addPlayers("Rico Dowdle","(DAL)", "RB", 9, 42.4, 4.711111111);
       allPlayers.addPlayers("Keaton Mitchell","(BAL)", "RB", 3, 34.4, 11.46666667);
       allPlayers.addPlayers("Darrell Henderson Jr.","(LAR)", "RB", 3, 27.6, 9.2);

       // WRs
       allPlayers.addPlayers("Tyreek Hill","(MIA)", "WR", 9, 189.8, 21.08888889);
       allPlayers.addPlayers("A.J. Brown","(PHI)", "WR", 9, 170, 18.88888889);
       allPlayers.addPlayers("Keenan Allen","(LAC)", "WR", 9, 168.6, 18.73333333);
       allPlayers.addPlayers("Stefon Diggs","(BUF)", "WR", 10, 165.3, 16.53);
       allPlayers.addPlayers("CeeDee Lamb","(DAL)", "WR", 9, 164.2, 18.24444444);
       allPlayers.addPlayers("Ja'Marr Chase","(CIN)", "WR", 9, 146, 16.22222222);
       allPlayers.addPlayers("Amon-Ra St. Brown","(DET)", "WR", 8, 137.9, 17.2375);
       allPlayers.addPlayers("DJ Moore","(CHI)", "WR", 10, 133.4, 13.34);
       allPlayers.addPlayers("Mike Evans","(TB)", "WR", 9, 131.2, 14.57777778);
       allPlayers.addPlayers("Puka Nacua","(LAR)", "WR", 9, 127.1, 14.12222222);
       allPlayers.addPlayers("Adam Thielen","(CAR)", "WR", 9, 125.8, 13.97777778);
       allPlayers.addPlayers("Jordan Addison","(MIN)", "WR", 10, 125, 12.5);
       allPlayers.addPlayers("Michael Pittman Jr.","(IND)", "WR", 10, 120.7, 12.07);
       allPlayers.addPlayers("Davante Adams","(LV)", "WR", 10, 112.4, 11.24);
       allPlayers.addPlayers("Chris Olave","(NO)", "WR", 10, 111.7, 11.17);
       allPlayers.addPlayers("Nico Collins","(HOU)", "WR", 8, 105.1, 13.1375);
       allPlayers.addPlayers("Jakobi Meyers","(LV)", "WR", 9, 105, 11.66666667);
       allPlayers.addPlayers("Brandon Aiyuk","(SF)", "WR", 8, 104.5, 13.0625);
       allPlayers.addPlayers("Amari Cooper","(CLE)", "WR", 9, 104, 11.55555556);
       allPlayers.addPlayers("Garrett Wilson","(NYJ)", "WR", 9, 102.3, 11.36666667);
       allPlayers.addPlayers("Tank Dell","(HOU)", "WR", 8, 101.9, 12.7375);
       allPlayers.addPlayers("Christian Kirk","(JAX)", "WR", 9, 101.5, 11.27777778);
       allPlayers.addPlayers("Courtland Sutton","(DEN)", "WR", 9, 99.8, 11.08888889);
       allPlayers.addPlayers("Tyler Lockett","(SEA)", "WR", 9, 98.4, 10.93333333);
       allPlayers.addPlayers("DeVonta Smith","(PHI)", "WR", 9, 98.3, 10.92222222);
       allPlayers.addPlayers("Terry McLaurin", "(WAS)", "WR", 10, 97.6, 9.76);
       allPlayers.addPlayers("DeAndre Hopkins","(TEN)", "WR", 9, 96.6, 10.73333333);
       allPlayers.addPlayers("Gabe Davis","(BUF)", "WR", 10, 95.3, 9.53);
       allPlayers.addPlayers("Marquise Brown","(ARI)", "WR", 10, 95.2, 9.52);
       allPlayers.addPlayers("Rashid Shaheed","(NO)", "WR", 10, 93.3, 9.33);
       allPlayers.addPlayers("George Pickens","(PIT)", "WR", 9, 92.7, 10.3);
       allPlayers.addPlayers("Jaylen Waddle","(MIA)", "WR", 8, 91.2, 11.4);
       allPlayers.addPlayers("Justin Jefferson","(MIN)", "WR", 5, 91.1, 18.22);
       allPlayers.addPlayers("Romeo Doubs","(GB)", "WR", 9, 86.8, 9.644444444);
       allPlayers.addPlayers("Zay Flowers","(BAL)", "WR", 10, 86.7, 8.67);
       allPlayers.addPlayers("Josh Downs","(IND)", "WR", 10, 85.8, 8.58);
       allPlayers.addPlayers("DK Metcalf","(SEA)", "WR", 8, 84.7, 10.5875);
       allPlayers.addPlayers("Chris Godwin","(TB)", "WR", 9, 83.6, 9.288888889);
       allPlayers.addPlayers("Jayden Reed","(GB)", "WR", 9, 83.6, 9.288888889);
       allPlayers.addPlayers("Kendrick Bourne","(NE)", "WR", 8, 81.5, 10.1875);
       allPlayers.addPlayers("Drake London","(ATL)", "WR", 9, 80.3, 8.922222222);
       allPlayers.addPlayers("Calvin Ridley","(JAX)", "WR", 9, 77.6, 8.622222222);
       allPlayers.addPlayers("Rashee Rice","(KC)", "WR", 9, 77.5, 8.611111111);
       allPlayers.addPlayers("Tutu Atwell","(LAR)", "WR", 9, 76.9, 8.544444444);
       allPlayers.addPlayers("Tyler Boyd","(CIN)", "WR", 9, 76.3, 8.477777778);
       allPlayers.addPlayers("Deebo Samuel","(SF)", "WR", 7, 75.6, 10.8);
       allPlayers.addPlayers("Curtis Samuel", "(WAS)", "WR", 9, 72.3, 8.033333333);
       allPlayers.addPlayers("Jahan Dotson", "(WAS)", "WR", 10, 71, 7.1);
       allPlayers.addPlayers("Michael Thomas","(NO)", "WR", 10, 70.3, 7.03);
       allPlayers.addPlayers("Michael Wilson","(ARI)", "WR", 9, 69.5, 7.722222222);
       allPlayers.addPlayers("Josh Reynolds","(DET)", "WR", 9, 69.2, 7.688888889);
       allPlayers.addPlayers("Brandin Cooks","(DAL)", "WR", 8, 67.1, 8.3875);
       allPlayers.addPlayers("K.J. Osborn","(MIN)", "WR", 9, 65.7, 7.3);
       allPlayers.addPlayers("Jaxon Smith-Njigba","(SEA)", "WR", 9, 61, 6.777777778);
       allPlayers.addPlayers("Noah Brown","(HOU)", "WR", 5, 60.3, 12.06);
       allPlayers.addPlayers("Tee Higgins","(CIN)", "WR", 7, 58.3, 8.328571429);
       allPlayers.addPlayers("Jerry Jeudy","(DEN)", "WR", 8, 58.1, 7.2625);
       allPlayers.addPlayers("Cooper Kupp","(LAR)", "WR", 5, 55.9, 11.18);
       allPlayers.addPlayers("Diontae Johnson","(PIT)", "WR", 5, 49.9, 9.98);

     // TEs
       allPlayers.addPlayers("T.J. Hockenson","(MIN)", "TE", 10, 125.6, 12.56);
       allPlayers.addPlayers("Travis Kelce","(KC)", "TE", 8, 112.2, 14.025);
       allPlayers.addPlayers("Mark Andrews","(BAL)", "TE", 9, 109.6, 12.17777778);
       allPlayers.addPlayers("George Kittle","(SF)", "TE", 9, 97.6, 10.84444444);
       allPlayers.addPlayers("Cole Kmet","(CHI)", "TE", 10, 95.1, 9.51);
       allPlayers.addPlayers("Sam LaPorta","(DET)", "TE", 9, 94.9, 10.54444444);
       allPlayers.addPlayers("Taysom Hill","(NO)", "TE", 10, 83.9, 8.39);
       allPlayers.addPlayers("Dalton Schultz","(HOU)", "TE", 9, 82.6, 9.177777778);
       allPlayers.addPlayers("Jake Ferguson","(DAL)", "TE", 9, 77.4, 8.6);
       allPlayers.addPlayers("Dallas Goedert","(PHI)", "TE", 9, 72, 8);
       allPlayers.addPlayers("Dalton Kincaid","(BUF)", "TE", 9, 71.5, 7.944444444);
       allPlayers.addPlayers("Logan Thomas", "(WAS)", "TE", 9, 70.3, 7.811111111);
       allPlayers.addPlayers("Evan Engram","(JAX)", "TE", 9, 70.1, 7.788888889);
       allPlayers.addPlayers("Jonnu Smith","(ATL)", "TE", 10, 69.8, 6.98);
       allPlayers.addPlayers("David Njoku","(CLE)", "TE", 9, 66.7, 7.411111111);
       allPlayers.addPlayers("Trey McBride","(ARI)", "TE", 10, 65.8, 6.58);
       allPlayers.addPlayers("Kyle Pitts","(ATL)", "TE", 10, 65, 6.5);
       allPlayers.addPlayers("Hunter Henry","(NE)", "TE", 10, 62.8, 6.28);
       allPlayers.addPlayers("Darren Waller","(NYG)", "TE", 8, 62.4, 7.8);
       allPlayers.addPlayers("Cade Otton","(TB)", "TE", 9, 58.4, 6.488888889);
       allPlayers.addPlayers("Tyler Conklin","(NYJ)", "TE", 9, 52.8, 5.866666667);
       allPlayers.addPlayers("Luke Musgrave","(GB)", "TE", 9, 51.8, 5.755555556);

       // Ks
       allPlayers.addPlayers("Dustin Hopkins","(CLE)", "K", 9, 109, 12.11111111);
       allPlayers.addPlayers("Matt Gay","(IND)", "K", 10, 93, 9.3);
       allPlayers.addPlayers("Jake Elliott","(PHI)", "K", 9, 93, 10.33333333);
       allPlayers.addPlayers("Brandon Aubrey","(DAL)", "K", 9, 92, 10.22222222);
       allPlayers.addPlayers("Younghoe Koo","(ATL)", "K", 10, 89, 8.9);
       allPlayers.addPlayers("Blake Grupe","(NO)", "K", 10, 89, 8.9);
       allPlayers.addPlayers("Jason Myers","(SEA)", "K", 9, 87, 9.666666667);
       allPlayers.addPlayers("Brandon McManus","(JAX)", "K", 9, 87, 9.666666667);
       allPlayers.addPlayers("Justin Tucker","(BAL)", "K", 10, 87, 8.7);
       allPlayers.addPlayers("Nick Folk","(TEN)", "K", 9, 86, 9.555555556);
       allPlayers.addPlayers("Greg Zuerlein","(NYJ)", "K", 8, 84, 10.5);
       allPlayers.addPlayers("Harrison Butker","(KC)", "K", 9, 84, 9.333333333);
       allPlayers.addPlayers("Cameron Dicker","(LAC)", "K", 9, 80, 8.888888889);
       allPlayers.addPlayers("Matt Prater","(ARI)", "K", 10, 79, 7.9);
       allPlayers.addPlayers("Chris Boswell","(PIT)", "K", 9, 78, 8.666666667);
       allPlayers.addPlayers("Jake Moody","(SF)", "K", 9, 78, 8.666666667);
       allPlayers.addPlayers("Evan McPherson","(CIN)", "K", 9, 77, 8.555555556);
       allPlayers.addPlayers("Greg Joseph","(MIN)", "K", 10, 77, 7.7);
       allPlayers.addPlayers("Chase McLaughlin","(TB)", "K", 9, 75, 8.333333333);
       allPlayers.addPlayers("Daniel Carlson","(LV)", "K", 10, 74, 7.4);
       allPlayers.addPlayers("Cairo Santos","(CHI)", "K", 10, 74, 7.4);
       allPlayers.addPlayers("Joey Slye", "(WAS)", "K", 10, 73, 7.3);
       allPlayers.addPlayers("Wil Lutz","(DEN)", "K", 9, 73, 8.111111111);
       allPlayers.addPlayers("Eddy Pineiro","(CAR)", "K", 9, 72, 8);
       allPlayers.addPlayers("Ka'imi Fairbairn","(HOU)", "K", 8, 72, 9);
       allPlayers.addPlayers("Riley Patterson","(DET)", "K", 9, 71, 7.888888889);
       allPlayers.addPlayers("Tyler Bass","(BUF)", "K", 10, 71, 7.1);
       allPlayers.addPlayers("Jason Sanders","(MIA)", "K", 9, 61, 6.777777778);
       allPlayers.addPlayers("Anders Carlson","(GB)", "K", 9, 59, 6.555555556);
       allPlayers.addPlayers("Chad Ryland","(NE)", "K", 10, 56, 5.6);
       allPlayers.addPlayers("Graham Gano","(NYG)", "K", 8, 50, 6.25);

       // DSTs
       allPlayers.addPlayers("Dallas Cowboys","(DAL)", "DST", 9, 108, 12);
       allPlayers.addPlayers("Baltimore Ravens","(BAL)", "DST", 10, 104, 10.4);
       allPlayers.addPlayers("Cleveland Browns","(CLE)", "DST", 9, 97, 10.77777778);
       allPlayers.addPlayers("Pittsburgh Steelers","(PIT)", "DST", 9, 88, 9.777777778);
       allPlayers.addPlayers("Buffalo Bills","(BUF)", "DST", 10, 87, 8.7);
       allPlayers.addPlayers("Indianapolis Colts","(IND)", "DST", 10, 83, 8.3);
       allPlayers.addPlayers("Kansas City Chiefs","(KC)", "DST", 9, 82, 9.111111111);
       allPlayers.addPlayers("New Orleans Saints","(NO)", "DST", 10, 81, 8.1);
       allPlayers.addPlayers("Minnesota Vikings","(MIN)", "DST", 10, 79, 7.9);
       allPlayers.addPlayers("Cincinnati Bengals","(CIN)", "DST", 9, 78, 8.666666667);
       allPlayers.addPlayers("New York Jets","(NYJ)", "DST", 9, 78, 8.666666667);
       allPlayers.addPlayers("Seattle Seahawks","(SEA)", "DST", 9, 77, 8.555555556);
       allPlayers.addPlayers("San Francisco 49ers","(SF)", "DST", 9, 77, 8.555555556);
       allPlayers.addPlayers("Jacksonville Jaguars","(JAX)", "DST", 9, 73, 8.111111111);
       allPlayers.addPlayers("Tampa Bay Buccaneers","(TB)", "DST", 9, 72, 8);
       allPlayers.addPlayers("Los Angeles Chargers","(LAC)", "DST", 9, 71, 7.888888889);
       allPlayers.addPlayers("Las Vegas Raiders","(LV)", "DST", 10, 71, 7.1);
       allPlayers.addPlayers("Philadelphia Eagles","(PHI)", "DST", 9, 67, 7.444444444);
       allPlayers.addPlayers("Houston Texans","(HOU)", "DST", 9, 61, 6.777777778);
       allPlayers.addPlayers("Detroit Lions","(DET)", "DST", 9, 60, 6.666666667);
       allPlayers.addPlayers("Denver Broncos","(DEN)", "DST", 9, 59, 6.555555556);
       allPlayers.addPlayers("Green Bay Packers","(GB)", "DST", 9, 57, 6.333333333);
       allPlayers.addPlayers("Miami Dolphins","(MIA)", "DST", 9, 56, 6.222222222);
       allPlayers.addPlayers("Washington Commanders","(WAS)", "DST", 10, 53, 5.3);
       allPlayers.addPlayers("Atlanta Falcons","(ATL)", "DST", 10, 52, 5.2);
       allPlayers.addPlayers("New England Patriots","(NE)", "DST", 10, 50, 5);
       allPlayers.addPlayers("Tennessee Titans","(TEN)", "DST", 9, 50, 5.555555556);
       allPlayers.addPlayers("Arizona Cardinals","(ARI)", "DST", 10, 50, 5);
       allPlayers.addPlayers("Chicago Bears","(CHI)", "DST", 10, 48, 4.8);
       allPlayers.addPlayers("Carolina Panthers","(CAR)", "DST", 9, 45, 5);
       allPlayers.addPlayers("New York Giants","(NYG)", "DST", 10, 44, 4.4);
       allPlayers.addPlayers("Los Angeles Rams","(LAR)", "DST", 9, 40, 4.444444444);

       teamStats.addTeams("Washington Commanders", "(WAS)", 32, 21.1, 16, 18.8, 31, 34.8, 16, 9.7, 32, 11.5, 26, 10, 19.2);
       teamStats.addTeams("Los Angeles Chargers", "(LAC)", 31, 20.9, 27, 22.4, 28, 32.8, 26, 11.7, 9, 7.9, 2, 3.2, 14.5);
       teamStats.addTeams("Philadelphia Eagles", "(PHI)", 30, 20.4, 1, 11.6, 32, 38.4, 21, 10.6, 4, 6, 10, 6, 20.1);
       teamStats.addTeams("Atlanta Falcons", "(ATL)", 29, 19.4, 3, 14.1, 10, 24.6, 24, 11.2, 25, 9.4, 21, 7.8, 15.3);
       teamStats.addTeams("Tampa Bay Buccaneers", "(TB)", 28, 19.3, 2, 13.3, 29, 33.5, 18, 10.1, 12, 8, 9, 5.8, 14.1);
       teamStats.addTeams("Jacksonville Jaguars", "(JAX)", 27, 18.9, 13, 17.1, 20, 29.6, 31, 12.6, 5, 6.6, 25, 9, 14.7);
       teamStats.addTeams("Denver Broncos", "(DEN)", 26, 18.8, 32, 29.8, 13, 26.1, 32, 12.6, 24, 9.2, 23, 8, 16.8);
       teamStats.addTeams("Arizona Cardinals", "(ARI)", 25, 18.6, 30, 24.5, 17, 27.7, 6, 6.9, 21, 9, 22, 8, 18.5);
       teamStats.addTeams("Detroit Lions", "(DET)", 24, 18.5, 5, 14.6, 23, 30.4, 23, 10.8, 6, 6.8, 6, 5.3, 18.8);
       teamStats.addTeams("Miami Dolphins", "(MIA)", 23, 18.3, 14, 17.4, 21, 29.7, 20, 10.6, 10, 7.9, 15, 6.6, 14.);
       teamStats.addTeams("Chicago Bears", "(CHI)", 22, 18.3, 21, 20.3, 16, 27.5, 28, 12, 27, 9.7, 30, 10.9, 19.);
       teamStats.addTeams("Cincinnati Bengals", "(CIN)", 21, 17.9, 17, 18.8, 18, 28.4, 29, 12.2, 16, 8.7, 8, 5.8, 16.9);
       teamStats.addTeams("Los Angeles Rams", "(LAR)", 20, 17.8, 10, 16.1, 11, 25.1, 27, 11.9, 29, 10.3, 17, 6.9, 15.9);
       teamStats.addTeams("Seattle Seahawks", "(SEA)", 19, 17.6, 28, 22.7, 19, 28.8, 15, 9.4, 23, 9.1, 7, 5.6, 15.4);
       teamStats.addTeams("Houston Texans", "(HOU)", 18, 17.4, 19, 19.8, 12, 25.4, 30, 12.2, 14, 8.6, 3, 4, 14.3);
       teamStats.addTeams("Minnesota Vikings", "(MIN)", 17, 17.3, 6, 15.2, 25, 30.9, 17, 9.7, 20, 8.8, 19, 7.2, 18.);
       teamStats.addTeams("New York Giants", "(NYG)", 16, 17, 24, 21.7, 30, 34, 7, 7, 7, 7.6, 32, 14.1, 21.1);
       teamStats.addTeams("New Orleans Saints", "(NO)", 15, 16.2, 4, 14.6, 8, 24.3, 22, 10.7, 15, 8.6, 12, 6.1, 14.1);
       teamStats.addTeams("Pittsburgh Steelers", "(PIT)", 14, 15.7, 23, 21.1, 27, 32.8, 4, 6.7, 22, 9, 11, 6, 14.7);
       teamStats.addTeams("Indianapolis Colts", "(IND)", 13, 15.6, 29, 23, 14, 26.1, 25, 11.3, 31, 11.2, 14, 6.4, 19.6);
       teamStats.addTeams("Dallas Cowboys", "(DAL)", 12, 15.6, 9, 15.4, 4, 22.6, 13, 9, 2, 5.3, 4, 4.3, 16.7);
       teamStats.addTeams("Tennessee Titans", "(TEN)", 11, 15.3, 15, 17.5, 26, 31.1, 2, 6, 30, 10.7, 20, 7.8, 14.4);
       teamStats.addTeams("Las Vegas Raiders", "(LV)", 10, 15, 25, 22.2, 7, 23.5, 14, 9.2, 18, 8.7, 24, 8.5, 19.);
       teamStats.addTeams("New England Patriots", "(NE)", 9, 14.9, 18, 19.4, 22, 30.2, 8, 7.1, 26, 9.5, 31, 11, 14.);
       teamStats.addTeams("Buffalo Bills", "(BUF)", 8, 14.7, 22, 20.6, 15, 26.4, 12, 8.7, 8, 7.8, 5, 5, 14.9);
       teamStats.addTeams("New York Jets", "(NYJ)", 7, 14.4, 20, 19.9, 1, 17.2, 19, 10.4, 28, 10, 29, 10.6, 16.1);
       teamStats.addTeams("Kansas City Chiefs", "(KC)", 6, 14, 11, 16.2, 9, 24.3, 9, 7.3, 1, 5, 13, 6.3, 16.6);
       teamStats.addTeams("San Francisco 49ers", "(SF)", 5, 13.7, 8, 15.4, 24, 30.6, 3, 6.2, 13, 8.2, 1, 2.8, 19.1);
       teamStats.addTeams("Carolina Panthers", "(CAR)", 4, 13.6, 31, 26.7, 3, 22.4, 11, 7.9, 11, 8, 27, 10.1, 13.8);
       teamStats.addTeams("Green Bay Packers", "(GB)", 3, 13.1, 26, 22.3, 5, 23.2, 10, 7.7, 19, 8.8, 18, 7, 20.2);
       teamStats.addTeams("Cleveland Browns", "(CLE)", 2, 12.9, 7, 15.2, 2, 21.4, 1, 4.8, 3, 5.6, 28, 10.2, 16.4);
       teamStats.addTeams("Baltimore Ravens","(BAL)", 1, 11.9, 12, 16.2, 6, 23.4, 5, 6.7, 17, 8.7, 16, 6.7, 16.);

       const vector<PlayerStats::stats>& stats = allPlayers.getStats();
       for (const auto& player : stats) {
           if (player.playerName == name) {
               onTeam = player.playerTeam;
               currentPosition = player.playerPosition;
               currentAvg = player.SeasonAverage;
               break;
           }
       }
        const vector<Rankings::Team>& teams = teamStats.getTeams();
        for (const auto& team : teams) {
            if (team.abbr == onTeam) {
                PMSS = team.matchupStrength;
                tName = team.name;
                break;
            }
        }


        // Check if the teams vector is not empty
        if (!teams.empty()) {
            //cout << "Team\t\t\tRanking\tAverage Points Allowed\n";
            //cout << "------------------------------------------------\n";
            if (currentPosition == "QB") {
                for (const auto& team : teams) {
                    if (team.name == matchup && team.abbr != onTeam) {
                        expAvg = (currentAvg + (team.averagePointsQBAllowed) * team.matchupStrength / 16) / 1.8 + (team.QBranking - PMSS) / 12;
                        if (expAvg > 20.0) {
                            cout << "Expecting a strong performance from " << tName <<" " << currentPosition << " " << name << " against the " << team.name << "! \nExpected Points : " << expAvg << endl;
                        }
                        else if (expAvg > 15.0) {
                            cout << "Expecting a decent performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << ". \nExpected Points : " << expAvg << endl;
                        }
                        else {
                            cout << tName << " " << currentPosition << ": " << name << " may have a challenging matchup against the " << team.name << ". \nExpected Points: " << expAvg << endl;
                        }
                    }
                    //cout << left << setw(25) << team.name << "\t" << setw(8) << team.ranking << "\t" << team.averagePointsAllowed << "\n";
                }
            }
            else if (currentPosition == "RB") {
                for (const auto& team : teams) {
                    if (team.name == matchup && team.abbr != onTeam) {
                        expAvg = (currentAvg + (team.averagePointsRBAllowed) * team.matchupStrength / 16) / 2. + (team.RBranking - PMSS) / 8;
                        if (expAvg > 20.0) {
                            cout << "Expecting a strong performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << "! \nExpected Points : " << expAvg << endl;
                        }
                        else if (expAvg > 15.0) {
                            cout << "Expecting a decent performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << ". \nExpected Points : " << expAvg << endl;
                        }
                        else {
                            cout << tName << " " << currentPosition << ": " << name << " may have a challenging matchup against the " << team.name << ". \nExpected Points: " << expAvg << endl;
                        }
                    }
                    //cout << left << setw(25) << team.name << "\t" << setw(8) << team.ranking << "\t" << team.averagePointsAllowed << "\n";
                }
            }
            else if (currentPosition == "WR") {
                for (const auto& team : teams) {
                    if (team.name == matchup && team.abbr != onTeam) {
                        expAvg = (currentAvg + (team.averagePointsWRAllowed) * team.matchupStrength / 16) / 2.4 + (team.WRranking - PMSS) / 16;
                        if (expAvg > 20.0) {
                            cout << "Expecting a strong performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << "! \nExpected Points : " << expAvg << endl;
                        }
                        else if (expAvg > 15.0) {
                            cout << "Expecting a decent performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << ". \nExpected Points : " << expAvg << endl;
                        }
                        else {
                            cout << tName << " " << currentPosition << ": " << name << " may have a challenging matchup against the " << team.name << ". \nExpected Points: " << expAvg << endl;
                        }
                    }
                    //cout << left << setw(25) << team.name << "\t" << setw(8) << team.ranking << "\t" << team.averagePointsAllowed << "\n";
                }
            }
            else if (currentPosition == "TE") {
                for (const auto& team : teams) {
                    if (team.name == matchup && team.abbr != onTeam) {
                        expAvg = (currentAvg + (team.averagePointsTEAllowed) * team.matchupStrength / 16) / 2. + (team.TEranking - PMSS) / 8;
                        if (expAvg > 20.0) {
                            cout << "Expecting a strong performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << "! \nExpected Points : " << expAvg << endl;
                        }
                        else if (expAvg > 15.0) {
                            cout << "Expecting a decent performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << ". \nExpected Points : " << expAvg << endl;
                        }
                        else {
                            cout << tName << " " << currentPosition << ": " << name << " may have a challenging matchup against the " << team.name << ". \nExpected Points: " << expAvg << endl;
                        }
                    }
                    //cout << left << setw(25) << team.name << "\t" << setw(8) << team.ranking << "\t" << team.averagePointsAllowed << "\n";
                }
            }
            else if (currentPosition == "K") {
                for (const auto& team : teams) {
                    if (team.name == matchup && team.abbr != onTeam) {
                        expAvg = (currentAvg + (team.averagePointsKAllowed) * team.matchupStrength / 16) / 2. + (team.Kranking - PMSS) / 8;
                        if (expAvg > 20.0) {
                            cout << "Expecting a strong performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << "! \nExpected Points : " << expAvg << endl;
                        }
                        else if (expAvg > 15.0) {
                            cout << "Expecting a decent performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << ". \nExpected Points : " << expAvg << endl;
                        }
                        else {
                            cout << tName << " " << currentPosition << ": " << name << " may have a challenging matchup against the " << team.name << ". \nExpected Points: " << expAvg << endl;
                        }
                    }
                    //cout << left << setw(25) << team.name << "\t" << setw(8) << team.ranking << "\t" << team.averagePointsAllowed << "\n";
                }
            }
            else if (currentPosition == "DST") {
                for (const auto& team : teams) {
                    if (team.name == matchup && team.abbr != onTeam) {
                        expAvg = (currentAvg + (team.averagePointsDSTAllowed) * team.matchupStrength / 16) / 2. + (team.DSTranking - PMSS) / 8;
                        if (expAvg > 20.0) {
                            cout << "Expecting a strong performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << "! \nExpected Points : " << expAvg << endl;
                        }
                        else if (expAvg > 15.0) {
                            cout << "Expecting a decent performance from " << tName << " " << currentPosition << " " << name << " against the " << team.name << ". \nExpected Points : " << expAvg << endl;
                        }
                        else {
                            cout << tName << " " << currentPosition << ": " << name << " may have a challenging matchup against the " << team.name << ". \nExpected Points: " << expAvg << endl;
                        }
                    }
                    //cout << left << setw(25) << team.name << "\t" << setw(8) << team.ranking << "\t" << team.averagePointsAllowed << "\n";
                }
            }
            else {
                cout << "Not a valid fantasy NFL position" << endl;
            }
        }
        else {
            cout << "No teams available.\n";
        }
    };


};
#endif