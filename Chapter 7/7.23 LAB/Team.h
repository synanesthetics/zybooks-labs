#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team {
    private:
        string name;
        int wins;
        int losses;
    
    public:
        void SetName(string usrName);
        void SetWins(int inWins);
        void SetLosses(int inLosses);

        string GetName() const;
        int GetWins() const;
        int GetLosses() const;

        double GetWinPercentage();
    
        void PrintStanding();
};

#endif