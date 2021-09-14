#include <iostream>
#include <string.h>
using namespace std;

class cricketer
{
    char name[30];
    int age, jno, ODIs;

public:
    void getData(char *n, int a, int j, int O)
    {
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
};

class batsman : public cricketer
{
    int runs, cen, hcen, highScore, noSixes, longSix;
    float avg, strikeRate;

public:
    void getData(char *n, int a, int j, int O, int r, float av, int hce, int ce, float sr, int hs, int ns, int ls)
    {
        cricketer ::getData(n, a, j, O);
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
};

class bowler : public cricketer
{
    char type[10];
    int wickets;
    float runrate, speed, eco;

public:
    void getData(char *n, int a, int j, int O, char *t, int w, float rr, float sp, float e)
    {
        cricketer ::getData(n, a, j, O);
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
};

int main()
{
    batsman ob1;
    bowler ob2;

    char n[20], t[10];
    int ag, jno, nodi, run, hc, c, hs, ns, ls, wc;
    float avg, sr, rr, econ, sp;

    cout << "Enter the data for batsman:\n";
    cout << "Name: ";
    gets(n);
    cout << "Age: ";
    cin >> ag;
    cout << "Jersey No: ";
    cin >> jno;
    cout << "ODIs Played: ";
    cin >> nodi;
    cout << "Runstaken: ";
    cin >> run;
    cout << "Average: ";
    cin >> avg;
    cout << "Half centuries: ";
    cin >> hc;
    cout << "Centuries: ";
    cin >> c;
    cout << "Strike rate: ";
    cin >> sr;
    cout << "Highest score: ";
    cin >> hs;
    cout << "No. of sixes: ";
    cin >> ns;
    cout << "Longest six: ";
    cin >> ls;
    ob1.getData(n, ag, jno, nodi, run, avg, hc, c, sr, hs, ns, ls);

    cout << "Enter the data for bowler:\n";
    cout << "Name: ";
    getchar();
    gets(n);
    cout << "Age: ";
    cin >> ag;
    cout << "Jersey No: ";
    cin >> jno;
    cout << "ODIs Played: ";
    cin >> nodi;
    cout << "Type: ";
    getchar();
    gets(t);
    cout << "Wickets Taken: ";
    cin >> wc;
    cout << "Runrate: ";
    cin >> rr;
    cout << "Speed: ";
    cin >> sp;
    cout << "Economy: ";
    cin >> econ;
    ob2.getData(n, ag, jno, nodi, t, wc, rr, sp, econ);

    cout << "Displaying data for Batsman:\n";
    ob1.display();
    cout << "Displaying data for Bowler:\n";
    ob2.display();
    return 0;
}