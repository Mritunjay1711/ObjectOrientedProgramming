#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("Count");
    ofstream fout("text");

    char ch;
    cout << fin.tellg() << endl;
    fin.seekg(-2, ios::end);
    cout << fin.tellg() << endl;

    int size = fin.tellg();

    for (int j = 1; j < size; j++)
    {
        fin.seekg(-j, ios::end);

        fin.get(ch);

        fout.put(ch);
    }

    fin.close();

    fout.close();
}