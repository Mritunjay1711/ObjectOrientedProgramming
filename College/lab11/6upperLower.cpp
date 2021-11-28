#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    fstream file;
    file.open("text.txt", ios :: in | ios :: out | ios :: trunc);
    char str[30];
    cout << "Enter a string to convert from upper to lower and vise-versa: ";
    cin >> str;
    int i = 0;
    if(!file)
    {
        cout << "File doesnot exist!\n";
        exit(1);
    }
    file.seekp(0);
    while(str[i])
    {
        file.put(str[i]);
        i++;
    }
    char ch;
    file.seekg(0);
    while(file)
    {
        file.get(ch);
        if(isupper(ch))
            ch += 32;
        else if(islower(ch))
            ch -= 32;
        file.seekg(-1, ios :: cur);
        // cout << file.tellg()<< endl;
        file.put(ch);
    }
    file.clear(); //*****To reset the flag 
    cout << file.tellg() << endl;
    file.seekg(0);
    while(file.eof() == 0)
    {
        file.get(ch);
        cout << ch;
    }
    file.close();
    return 0;
}