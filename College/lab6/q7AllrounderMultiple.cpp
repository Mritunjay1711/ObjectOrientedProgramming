#include <iostream>
#include <string.h>
using namespace std;

class batsman
{
    int runs, cen, hcen;
    float avg, strikeRate;

public:
    void getDataBatsman(int r, float av, int hce, int ce, float sr)
    {
        runs = r;
        avg = av;
        hcen = hce;
        cen = ce;
        strikeRate = sr;
    }
    void display()
    {
        cout << "Runs: " << runs << endl;
        cout << "Batting Avg: " << avg << endl;
        cout << "No of Half Centuries: " << hcen << endl;
        cout << "No of centuries: " << cen << endl;
        cout << "Strike rate: " << strikeRate << endl;
    }
};

class bowler
{
    char type[10], bestFigure[10];
    int wickets, noHatric;
    float runrate, speed;

public:
    void getDataBowler(char *t, int w, float rr, float sp, char *bf)
    {
        strcpy(type, t);
        wickets = w;
        runrate = rr;
        speed = sp;
        strcpy(bestFigure, bf);
    }
    void display()
    {
        cout << "Type: " << type << endl;
        cout << "Wickets Taken: " << wickets << endl;
        cout << "Runrate: " << runrate << endl;
        cout << "Speed: " << speed << endl;
        cout << "Best Figure: " << bestFigure << endl;
    }
};

class allrounder : public batsman, public bowler
{
    int nomom, noim, noc, icc, spom;

public:
    void getDataAll(int nom, int noi, int nc, int ic, int spo)
    {
        nomom = nom;
        noim = noi;
        noc = nc;
        icc = ic;
        spom = spo;
    }
    void display()
    {
        batsman ::display();
        bowler ::display();
        cout << "Man of the Match: " << nomom << endl;
        cout << "No. of International Matches: " << noim << endl;
        cout << "No. of catches: " << noc << endl;
        cout << "ICC Ranking: " << icc << endl;
        cout << "Stylish player of the match: " << spom << endl;
    }
};

int main()
{
    allrounder ob1;
    int runs, cen, hcen, wickets, noHatric;
    float avg, strikeRate, runrate, speed;
    char type[10], bestFigure[10];
    int nomom, noim, noc, icc, spom;

    cout << "Runs: ";
    cin >> runs;
    cout << "Average: ";
    cin >> avg;
    cout << "Half Centuries: ";
    cin >> hcen;
    cout << "Centuries: ";
    cin >> cen;
    cout << "Strike Rate: ";
    cin >> strikeRate;
    cout << "Type: ";
    cin >> type;
    cout << "Wickets Taken: ";
    cin >> wickets;
    cout << "Runrate: ";
    cin >> runrate;
    cout << "Speed: ";
    cin >> speed;
    cout << "Best Figure: ";
    cin >> bestFigure;
    cout << "Man of the Match: ";
    cin >> nomom;
    cout << "No. of International Matches: ";
    cin >> noim;
    cout << "No. of catches: ";
    cin >> noc;
    cout << "ICC Ranking: ";
    cin >> icc;
    cout << "Stylish player of the match: ";
    cin >> spom;

    ob1.getDataBatsman(runs, avg, hcen, cen, strikeRate);
    ob1.getDataBowler(type, wickets, runrate, speed, bestFigure);
    ob1.getDataAll(nomom, noim, noc, icc, spom);
    cout << "Displaying the Data:\n";
    ob1.display();
    return 0;
}