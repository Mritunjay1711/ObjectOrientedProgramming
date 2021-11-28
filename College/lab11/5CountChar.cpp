#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("Count.txt");
    char ch;
    int nol = 1, noc = 0, nosc = 0, now = 0, nosa = 0, noca = 0;
    if(!file)
    {
        cout << "File doesnot exist!\n";
        exit(1);
    }
    while(file.eof() == 0)
    {
        file.get(ch);
        if(ch == '\n')
            nol++;
        if(ch >= 'a' && ch <= 'z')
            nosa++;
        if(ch >= 'A' && ch <= 'Z')
            noca++;
        if(ch == '#' || ch == '@' || ch == '&' || ch == '/')
            nosc++;
        if(ch == ' ')
            now++;
        noc++;
    }   
    cout << "Number of Lines: " << nol << endl;
    cout << "Number of small letters: " << nosa << endl;
    cout << "Number of capital letters: " << noca << endl;
    cout << "Number of special characters: " << nosc << endl;
    cout << "Number of words: " << now << endl;
    cout << "Number of characters: " << noc << endl;
    file.close();
    return 0;
}