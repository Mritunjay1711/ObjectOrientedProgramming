#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class guest
{
    char name[30];
    char phone[10];
    char email[30];
    char pAddress[30];
public:
    void getData()
    {
        cout << "Enter the name: ";
        cin.getline(name, 30);
        cout << "Enter the phone: ";
        cin.getline(phone, 10);
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
    
    return 0;
}