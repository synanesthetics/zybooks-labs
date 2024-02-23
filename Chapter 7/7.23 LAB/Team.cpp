#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;

void Team::SetName(string usrName) {
    name = usrName;
}

void Team::SetWins(int inWins) {
    wins = inWins;
}

void Team::SetLosses(int inLosses) {
    losses = inLosses;
}

string Team::GetName() const {
    return name;
}

int Team::GetWins() const {
    return wins;
}

int Team::GetLosses() const {
    return losses;
}

double Team::GetWinPercentage() {
    int totalGames = wins + losses;

    return static_cast<double>(wins) / totalGames; 
}

void Team::PrintStanding() {

    cout << fixed << setprecision(2);

    double winPercentage = GetWinPercentage();

    cout << "Win percentage: " << winPercentage << endl;

    if (winPercentage >= 0.5) {
        cout << "Congratulations, Team " << name << " has a winning average!" << endl;
    }
    else {
        cout << "Team " << name << " has a losing average." << endl;
    }

}