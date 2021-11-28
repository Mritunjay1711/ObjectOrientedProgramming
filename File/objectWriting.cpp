#include<iostream>
#include<fstream>
using namespace std;

class A
{
    int a, b;
public:
    A(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
    friend ofstream &operator<<(ofstream&, A&);
    friend ifstream &operator>>(ifstream&, A&);
};

ifstream &operator>>(ifstream &in, A &ob)
{
    in >> ob.a >> ob.b;
    return in;
}

ofstream &operator<<(ofstream& out, A &obj)
{
    out << obj.a << " " << obj.b;
    return out;
}

int main(){
    A ob(2, 8), ob2;
    ob.display();
    ofstream file("write.txt");
    file << ob;
    file.close();
    
    ifstream fin("write.txt");
    fin >> ob2;
    ob2.display();
    fin.close();
    return 0;
}