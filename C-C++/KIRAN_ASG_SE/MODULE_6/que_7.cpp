// Assume a class cricketer is declared. Declare a derived class batsman from cricketer .Data member of
// batsman. Total runs, Average runs and best performance. Member functions input data, calculate
// average runs, Display data. (Single Inheritance)
#include <iostream>
#include <string>
using namespace std;

class Cricketer 
{
protected:
    string playerName;
    int matchesPlayed;

public:
    void inputData() {
        cout << "Enter player name: ";
        cin >> playerName;

        cout << "Enter matches played: ";
        cin >> matchesPlayed;
    }

    void displayData()
     const {
        cout << "Player Name: " << playerName << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
    }
};

class Batsman : public Cricketer
 {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() 
    {
        inputData();

        cout << "Enter total runs: ";
        cin >> totalRuns;

        cout << "Enter best performance (runs in a single match): ";
        cin >> bestPerformance;

        averageRuns = static_cast<float>(totalRuns) / matchesPlayed;
    }

    void displayB() 
    const 
    {
        displayData();

        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance (Runs in a Single Match): " << bestPerformance << endl;
    }
};

int main()
 {
    Batsman batsman;

    batsman.inputBatsmanData();

    cout << "\nBatsman Details:\n";
    batsman.displayB();

}
