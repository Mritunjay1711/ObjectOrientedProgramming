#include <iostream>
#include <fstream>
#include <string.h>
#include <ctype.h>
#include <iomanip>
using namespace std;

class guests
{
    char name[20];
    char email[50];
    char postal[100];
    int phone;

public:
    guests(char n[], char e[], char pos[], int ph)
    {
        strcpy(name, n);
        strcpy(email, e);
        strcpy(postal, pos);
        phone = ph;
    }
    guests()
    {
        strcpy(name, "");
        strcpy(email, "");
        strcpy(postal, "");
        phone = 0;
    }
    void display()
    {
        cout << name << email << postal << phone << endl;
    }
    char *getname()
    {
        return name;
    }
};

int main()
{
    fstream file;
    file.open("guests.dat", ios::out);
    if (!file)
    {
        cout << "\nError opening file";
        exit(0);
    }
    guests obj;
    char nm[20], em[50], ps[100];
    int ph, n, flag = -1;
    int size = sizeof(obj);
    cout << "\nEnter the no of records you want to store : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nGuest Details " << i + 1 << " :-";
        cout << "\nEnter Name : ";
        cin >> nm;
        cout << "\nEnter email address : ";
        cin >> em;
        cout << "\nEnter postal address : ";
        cin >> ps;
        cout << "\nEnter phone number : ";
        cin >> ph;
        obj = guests(nm, em, ps, ph);

        file.write((char *)&obj, size);
    }
    file.close();

    file.open("guests.dat", ios::in);
    file.seekg(0);

    char name[20], *name2;
    cout << "\nEnter the name of guest to remove from the list : ";
    cin >> name;

    fstream file2;
    file2.open("temp.dat", ios::out);

    guests obj2;
    for (int i = 0; i < n; i++)
    {
        cout << "\nloop1";
        file.read((char *)&obj2, size);
        name2 = obj2.getname();
        if (!strcmp(name2, name))
            cout << "\nName Deleted";
        else
        {
            file2.write((char *)&obj2, size);
            cout << "\nCopied";
        }
    }
    file.close();

    cout << "\nEnter the new guest details you want to store : ";
    cout << "\nEnter Name : ";
    cin >> nm;
    cout << "\nEnter email address : ";
    cin >> em;
    cout << "\nEnter postal address : ";
    cin >> ps;
    cout << "\nEnter phone number : ";
    cin >> ph;

    obj = guests(nm, em, ps, ph);

    // file2.seekg(0, ios::end);
    // if (file2.eof())
    //     file2.clear();

    file2.write((char *)&obj, size) << flush;

    file2.close();

    remove("guests.dat");
    rename("temp.dat", "guests.dat");

    file2.open("guests.dat", ios::in);

    file2.seekg(0);
    guests obj3;

    for (int i = 0; i < n; i++)
    {
        file2.read((char *)&obj3, size);
        obj3.display();
    }

    file2.close();
}