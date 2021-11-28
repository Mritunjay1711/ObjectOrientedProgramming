#include<iostream>
#include<fstream>
using namespace std;

class inventory
{
    char name[20];
    int code;
    float cost;
public:
    void readData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter code: ";
        cin >> code;
        cout << "Enter cost: ";
        cin >> cost;
    }
    void writeData()
    {
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main(){
    fstream file;
    file.open("8stock.txt", ios :: in | ios :: out | ios :: trunc);
    inventory item[3], item2[3];
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter the data for item " << i << endl;
        item[i].readData();
        file.write((char*)&item[i], sizeof(item[i]));
    }
    file.seekg(0);
    cout << "OUTPUT\n";
    for(int i = 0; i < 3; i++)
    {
        file.read((char*)&item2[i], sizeof(item2[i]));
        item2[i].writeData();
    }
    file.close();
    return 0;
}