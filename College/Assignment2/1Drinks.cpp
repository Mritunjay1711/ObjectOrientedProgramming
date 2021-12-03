#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class DRINKS
{
    int Dcode;
    char Dname[13];
    int Dsize; //size in litres
    float Dprice;
public:
    void getDrinks()
    {
        cout << "Enter drink code: ";
        cin >> Dcode;
        cout << "Enter drink name: ";
        getchar();
        gets(Dname);
        cout << "Enter drink size: ";
        cin >> Dsize;
        cout << "Enter drink price: ";
        cin >> Dprice;
    }
    void showDrinks()
    {
        cout << "Drink Code: " << Dcode << endl;
        cout << "Drink name: " << Dname << endl;
        cout << "Drink size: " << Dsize << endl;
        cout << "Drink prince: " << Dprice << endl;
    }
    char *getName()
    {
        return Dname;
    }
};

int main(){
    fstream file;
    file.open("1Drinks.txt", ios :: out | ios :: in | ios :: trunc);
    DRINKS ob1[3];

    for(int i = 0; i < 3; i++)
    {
        cout << "Enter the data for DRINK " << i + 1 << endl;
        ob1[i].getDrinks();
        file.write((char*)&ob1[i], sizeof(ob1[i]));
    }
    int flag = 0;
    for(int i = 0; i < 3; i++)
    {
        file.read((char*)&ob1[i], sizeof(ob1[i]));
        if(!strcmp(ob1[i].getName(), "Indy Cola"))
        {
            ob1[i].showDrinks();
            flag = 1;
        }

    }
    if(!flag)
        cout << "Drink not found!\n"; 
    file.close();
    return 0;
}