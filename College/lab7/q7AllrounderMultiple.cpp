#include <iostream>
#include <string.h>
using namespace std;

class batsman
{
    int runs, cen, hcen;
    float avg, strikeRate;

public:
    batsman(int r, float av, int hce, int ce, float sr)
    {
        cout << "batsman constructor is called!\n";
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
    ~batsman()
    {
        cout << "batsman destructor is called!\n";
    }
};

class bowler
{
    char type[10], bestFigure[10];
    int wickets, noHatric;
    float runrate, speed;

public:
    bowler(char *t, int w, float rr, float sp, char *bf)
    {
        cout << "bowler constructor is called!\n";
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
    
    ~bowler()
    {
        cout << "bowler destructor is called!\n";
    }
};

class allrounder : public batsman, public bowler
{
    int nomom, noim, noc, icc, spom;

public:
    allrounder(int r, float av, int hce, int ce, float sr, char *t, int w, float rr, float sp, char *bf, int nom, int noi, int nc, int ic, int spo) : batsman(r, av, hce, ce, sr), bowler(t, w, rr, sp, bf)
    {
        cout << "allrounder constructor is called!\n";
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

    ~allrounder()
    {
        cout << "allrounder destructor is called!\n";
    }
};

int main()
{
    int runs_26, cen_26, hcen_26, wickets_26, noHatric_26;
    float avg_26, strikeRate_26, runrate_26, speed_26;
    char type_26[10], bestFigure_26[10];
    int nomom_26, noim_26, noc_26, icc_26, spom_26;

    cout << "Runs: ";
    cin >> runs_26;
    cout << "Average: ";
    cin >> avg_26;
    cout << "Half Centuries: ";
    cin >> hcen_26;
    cout << "Centuries: ";
    cin >> cen_26;
    cout << "Strike Rate: ";
    cin >> strikeRate_26;
    cout << "Type: ";
    cin >> type_26;
    cout << "Wickets Taken: ";
    cin >> wickets_26;
    cout << "Runrate: ";
    cin >> runrate_26;
    cout << "Speed: ";
    cin >> speed_26;
    cout << "Best Figure: ";
    cin >> bestFigure_26;
    cout << "Man of the Match: ";
    cin >> nomom_26;
    cout << "No. of International Matches: ";
    cin >> noim_26;
    cout << "No. of catches: ";
    cin >> noc_26;
    cout << "ICC Ranking: ";
    cin >> icc_26;
    cout << "Stylish player of the match: ";
    cin >> spom_26;

    allrounder ob1_26(runs_26, avg_26, hcen_26, cen_26, strikeRate_26, type_26, wickets_26, runrate_26, speed_26, bestFigure_26, nomom_26, noim_26, noc_26, icc_26, spom_26);
    cout << "Displaying the Data:\n";
    ob1_26.display();
    return 0;
}