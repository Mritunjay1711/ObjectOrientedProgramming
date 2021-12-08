#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class guest
{
    char name[30];
    char phone[20];
    char email[30];
    char pAddress[30];
public:
    void getData()
    {
        cout << "Enter the name: ";
        cin.getline(name, 30);
        cout << "Enter the phone: ";
        cin.getline(phone, 20);
        cout << "Enter the email: ";
        cin.getline(email, 30);
        cout << "Enter the Address: ";
        cin.getline(pAddress, 30);
    }
    char *returnName()
    {
        return name;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Phone: " << phone << endl;
        cout  << "Email: " << email << endl;
        cout << "Address: " << pAddress << endl;
    }
};

int main(){
    fstream file;
    int n;
    cout << "Enter the number of guest: ";
    cin >> n;
    cin.ignore();
    guest ob;
    file.open("guest.dat", ios :: out);
    for(int i = 0; i < n; i++)
    {
        cout << "Enter data for guest " << i << endl;
        ob.getData();
        // ob.display();
        file.write((char*)&ob, sizeof(ob));
    }
    file.close();

    fstream file2;
    file2.open("copy.dat", ios :: out);
    file.open("guest.dat", ios :: in);
    char name[30], *name2;
    cout << "Enter the name to remove: ";
    cin.getline(name, 30);
    int flag = 0;
    for(int i = 0; i < n; i++)
    {
        file.read((char*)&ob, sizeof(ob));
        name2 = ob.returnName();
        if(!strcmp(name, name2))
        {
            cout << "Guest removed!\n";
            flag = 1;
        }
        else
        {
            file2.write((char*)&ob, sizeof(ob));
        }
    }
    if(!flag)
    {
        cout << "No data with this name found!\n";
        exit(1);
    }
    cout << "Enter the new guest\n";
    ob.getData();
    file2.write((char*)&ob, sizeof(ob));
    
    file.close();
    file2.close();
    remove("guest.dat");
    rename("copy.dat", "guest.dat");

    file.open("guest.dat", ios :: in);
    file.seekp(0);
    cout << "\nShowing new list\n";
    while(file)
    {
        file.read((char*)&ob, sizeof(ob));
        ob.display();
        cout << endl;
    }
    file.close();

    return 0;
}