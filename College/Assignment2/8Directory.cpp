#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class Directory{
    char name[20];
    char address[30];
    char areaCode[5];
    char phno[15];
public:
    void getData()
    {
        cout << "Enter the name: ";
        cin.getline(name, 20);
        cout << "Enter the address: ";
        cin.getline(address, 30);
        cout << "Enter the area code: ";
        cin.getline(areaCode, 5);
        cout << "Enter the phone number: ";
        cin.getline(phno, 15);
    }
    int checkcode(char AC[])
    {
        return strcmp(areaCode, AC);
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Area Code: " << areaCode << endl;
        cout << "Phone number: " << phno << endl; 
    }
};

void CopyABC()
{
    fstream file, file2;
    file.open("Tele.dat", ios :: in);
    file2.open("Teleback.dat", ios :: out);
    Directory ob;

    char AC[] = {"123"};
    while(file)
    {
        file.read((char*)&ob, sizeof(ob));
        if(!ob.checkcode(AC))
        {
            file2.write((char*)&ob, sizeof(ob));
        }
    }
    file.close();
    file2.close();
}

int main(){
    fstream file;
    file.open("Tele.dat", ios :: out);
    Directory ob;
    int n;
    cout << "Enter the number of data: ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the data\n";
        ob.getData();
        file.write((char*)&ob, sizeof(ob));
    }
    file.close();

    CopyABC();

    file.open("Teleback.dat");
    if(!file)
        cout << "File not found!\n";
    
    cout << "Output\n";
    while(file)
    {
        file.read((char*)&ob, sizeof(ob));
        ob.show();
    }
    file.close();
    return 0;
}