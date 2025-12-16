#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct nameType{
    string firstname;
    string lastname;
};
struct statisticType{
    int pointsScored;
    int assists;
    int steals;
    int turnovers;
};
struct averagesType{
    double avgPointsPerGame;
    double avgAsPerGame;
    double avgStPerGame;
    double avgToPerGame;
};
struct playerType{
    nameType name;
    string position;
    double height;
    statisticType statistic;
    int gamesPlayed;
    averagesType averages;
};

void computeAverages(playerType &p) {
    if (p.gamesPlayed > 0) {
        p.averages.avgPointsPerGame = (double)p.statistic.pointsScored/p.gamesPlayed;
        p.averages.avgAsPerGame = (double)p.statistic.assists/p.gamesPlayed;
        p.averages.avgStPerGame = (double)p.statistic.steals/p.gamesPlayed;
        p.averages.avgToPerGame = (double)p.statistic.turnovers/p.gamesPlayed;
    } else {
        p.averages.avgPointsPerGame = 0;
        p.averages.avgAsPerGame = 0;
        p.averages.avgStPerGame = 0;
        p.averages.avgToPerGame = 0;
    }
}

int main() {
    // playerType players[10];
    ifstream  infile;

    infile.open("players_data2.txt");
    if(!infile){
        cout<<"Cannot open the input file";
        return 1;
    }

    int capacity = 5;
    int count = 0;

    playerType *players = new playerType[capacity];


    while (true) {
        playerType temp;
        if(!(infile  >> temp.name.firstname
                >> temp.name.lastname
                >> temp.position
                >> temp.height
                >> temp.gamesPlayed
                >> temp.statistic.pointsScored
                >> temp.statistic.assists
                >> temp.statistic.steals
                >> temp.statistic.turnovers)) {
            break;
        }

        computeAverages(temp);
        if(count == capacity) {
            int newCapacity = capacity * 2;
            playerType *bigger = new playerType[newCapacity];

            for(int i = 0; i < count; i++) {
                bigger[i] = players[i];
            }

            delete[] players;
            players = bigger;
            capacity = newCapacity;
        }
        players[count] = temp;
        count++;
    }

    infile.close();

    cout << left
        << setw(18) <<"Pavarde"
        << right
        << setw(8) <<"PPG"
        << setw(8) <<"APG"
        << setw(8) <<"SPG"
        <<endl;
    for(int i = 0; i < count; i++){
        cout<< left
            << setw(18) << players[i].name.lastname
            <<right <<fixed <<setprecision(1)
            <<setw(8)<<players[i].averages.avgPointsPerGame
            <<setw(8)<<players[i].averages.avgAsPerGame
            <<setw(8)<<players[i].averages.avgStPerGame
            <<endl;
    }

    delete[] players;
    players = NULL;
    return 0;
}