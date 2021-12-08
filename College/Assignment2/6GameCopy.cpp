#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct GAME
{
    char Gamename[30];
    char participant[5][30];
};

void CreateBasket(fstream &file)
{
    fstream file2;
    GAME ob;
    file2.open("Basket.dat", ios :: out);
    file.seekg(0);
    int flag = 0;
    while(file)
    {
        file.read((char*)&ob, sizeof(ob));
        if(!strcmp(ob.Gamename, "Basket Ball"))
        {
            file2.write((char*)&ob, sizeof(ob));
            flag = 1;
        }
    }
    if(!flag)
    {
        cout << "No data with basket ball found!\n";
        exit(1);
    }
}

void getGameData(GAME &ob)
{
    cout << "Enter the game name:";
    cin.getline(ob.Gamename, 30);
    cout << "Enter the participants: \n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter name[" << i << "]: ";
        cin.getline(ob.participant[i], 30);
    }
}

void DisplayGameData(const GAME &ob)
{
    cout << "Gamename: " << ob.Gamename << endl;
    cout << "Participants\n";
    for(int i = 0; i < 5; i++)
    {
        cout << ob.participant[i] << endl;
    }
}

int main(){
    fstream file;
    file.open("6Game.dat", ios :: out | ios :: in | ios :: trunc);

    int n;
    cout << "Enter the games you want to enter in file: ";
    cin >> n;
    cin.ignore();
    GAME ob;
    for(int i = 0; i < n; i++)
    {
        getGameData(ob);
        file.write((char*)&ob, sizeof(ob));
    }

    CreateBasket(file);
    file.close();
    file.open("Basket.dat", ios :: in);
    if(!file)
        cout << "File not found!\n";
    file.seekg(0);
    while(file)
    {
        file.read((char*)&ob, sizeof(ob));
        DisplayGameData(ob);
    }
    file.close();
    return 0;
}