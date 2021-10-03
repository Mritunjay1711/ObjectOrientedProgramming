#include <iostream>
#include <string.h>
using namespace std;

class cricketer
{
    char name[30];
    int age, jno, ODIs;

public:
    cricketer(char *n, int a, int j, int O)
    {
        cout << "cricketer constructor is called!\n";
        strcpy(name, n);
        age = a;
        jno = j;
        ODIs = O;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Jersey No.: " << jno << endl;
        cout << "ODIs Played: " << ODIs << endl;
    }

    ~cricketer()
    {
        cout << "cricketer destructor is called!\n";
    }
};

class batsman : public cricketer
{
    int runs, cen, hcen, highScore, noSixes, longSix;
    float avg, strikeRate;

public:
    batsman(char *n, int a, int j, int O, int r, float av, int hce, int ce, float sr, int hs, int ns, int ls) : cricketer(n, a, j, O)
    {
        cout << "batsman constructor is called!\n";
        runs = r;
        avg = av;
        hcen = hce;
        cen = ce;
        strikeRate = sr;
        highScore = hs;
        noSixes = ns;
        longSix = ls;
    }
    void display()
    {
        cricketer ::display();
        cout << "Runstaken: " << runs << endl;
        cout << "Batting Avg: " << avg << endl;
        cout << "No of Half Centuries: " << hcen << endl;
        cout << "No of centuries: " << cen << endl;
        cout << "Strike rate: " << strikeRate << endl;
        cout << "Highest score: " << highScore << endl;
        cout << "No of sixes: " << noSixes << endl;
        cout << "Longest six: " << longSix << endl;
    }

    ~batsman()
    {
        cout << "batsman destructor is called!\n";
    }
};

class bowler : public cricketer
{
    char type[10];
    int wickets;
    float runrate, speed, eco;

public:
    bowler(char *n, int a, int j, int O, char *t, int w, float rr, float sp, float e) : cricketer(n, a, j, O)
    {
        cout << "bowler constructor is called!\n";
        strcpy(type, t);
        wickets = w;
        runrate = rr;
        speed = sp;
        eco = e;
    }
    void display()
    {
        cricketer ::display();
        cout << "Type: " << type << endl;
        cout << "Wickets Taken: " << wickets << endl;
        cout << "Runrate: " << runrate << endl;
        cout << "Speed: " << speed << endl;
        cout << "Economy: " << eco << endl;
    }

    ~bowler()
    {
        cout << "bowler destructor is called!\n";
    }
};

int main()
{
    char n_26[20], t_26[10];
    int ag_26, jno_26, nodi_26, run_26, hc_26, c_26, hs_26, ns_26, ls_26, wc_26;
    float avg_26, sr_26, rr_26, econ_26, sp_26;

    cout << "Enter the data for batsman:\n";
    cout << "Name: ";
    gets(n_26);
    cout << "Age: ";
    cin >> ag_26;
    cout << "Jersey No: ";
    cin >> jno_26;
    cout << "ODIs Played: ";
    cin >> nodi_26;
    cout << "Runstaken: ";
    cin >> run_26;
    cout << "Average: ";
    cin >> avg_26;
    cout << "Half centuries: ";
    cin >> hc_26;
    cout << "Centuries: ";
    cin >> c_26;
    cout << "Strike rate: ";
    cin >> sr_26;
    cout << "Highest score: ";
    cin >> hs_26;
    cout << "No. of sixes: ";
    cin >> ns_26;
    cout << "Longest six: ";
    cin >> ls_26;
    batsman ob1_26(n_26, ag_26, jno_26, nodi_26, run_26, avg_26, hc_26, c_26, sr_26, hs_26, ns_26, ls_26);

    cout << "Enter the data for bowler:\n";
    cout << "Name: ";
    getchar();
    gets(n_26);
    cout << "Age: ";
    cin >> ag_26;
    cout << "Jersey No: ";
    cin >> jno_26;
    cout << "ODIs Played: ";
    cin >> nodi_26;
    cout << "Type: ";
    getchar();
    gets(t_26);
    cout << "Wickets Taken: ";
    cin >> wc_26;
    cout << "Runrate: ";
    cin >> rr_26;
    cout << "Speed: ";
    cin >> sp_26;
    cout << "Economy: ";
    cin >> econ_26;
    bowler ob2_26(n_26, ag_26, jno_26, nodi_26, t_26, wc_26, rr_26, sp_26, econ_26);

    cout << "Displaying data for Batsman:\n";
    ob1_26.display();
    cout << "Displaying data for Bowler:\n";
    ob2_26.display();
    return 0;
}