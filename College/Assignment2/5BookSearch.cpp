#include<iostream>
#include<fstream>
using namespace std;

class Books
{
    int Bno;
    char title[30];
public:
    void Enter()
    {
        cout << "Enter the book number: ";
        cin >> Bno;
        cout << "Enter the title: ";
        getchar();
        gets(title);
    }
    int RBno()
    {
        return Bno;
    }
    void display()
    {
        cout << "Book number: " << Bno << endl;
        cout << "Title: " << title << endl;
    }
};

void Search(fstream &file, int Bno)
{
    Books ob;
    file.seekg(0);
    while(file)
    {
        file.read((char*)&ob, sizeof(ob));
        if(ob.RBno() == Bno)
            ob.display();
    }
}

int main(){
    fstream file;
    file.open("5Book.dat", ios :: in | ios :: out | ios :: trunc);
    Books ob;
    int n, Bno;
    cout << "Enter the number of data for books: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the data for book " << i + 1 << endl;
        ob.Enter();
        file.write((char*)&ob, sizeof(ob));
    }
    cout << "Enter the book number to search: ";
    cin >> Bno;

    Search(file, Bno);
    file.close();
    return 0;
}