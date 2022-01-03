#include <iostream>
#include<string.h>
using namespace std;
class Cricketer
{
    char Name[20];
    int Jno, odi_rank, str_rt, bat_avg;

public:
    void getData()
    {
        cout << "Enter the name:";
        cin >> Name;
        cout << "Enter the Jersey Number:";
        cin >> Jno;
        cout << "Enter the ODI Rank:";
        cin >> odi_rank;
        cout << "Enter the Strike Rate:";
        cin >> str_rt;
        cout << "Enter the Batting average:";
        cin >> bat_avg;
    }
    void showData()
    {
        cout << "Name:\t\t\t" << Name << endl;
        cout << "Jersey number:\t\t" << Jno << endl;
        cout << "ODI Rank:\t\t" << odi_rank << endl;
        cout << "Strike Rate:\t\t" << str_rt << endl;
        cout << "Batting Average:\t" << bat_avg << endl;
    }
    friend void editCricketer(Cricketer *ob, int n, const char *na)
    {
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(!strcmp(ob[i].Name, na))
            {
                ob[i].getData();
                flag = 1;
            }
        }
        if(!flag)
            cout << "Player not found!\n";
    }
};
int main()
{
    int n;
    cout << "Enter the number of players:";
    cin >> n;
    Cricketer *ob = new Cricketer[n];
    if (!ob)
        cout << "Allocation of memory failed!" << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "\nEnter the details of Player " << i + 1 << endl;
            ob[i].getData();
        }
        char ch[30];
        cout << "Enter the name of the cricketer to edit: ";
        cin >> ch;
        editCricketer(ob, n, ch);
        for (int i = 0; i < n; i++)
        {
            cout << "\nPlayer " << i + 1 << endl;
            ob[i].showData();
        }
    }
    return 0;
}