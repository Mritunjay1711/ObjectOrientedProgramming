#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("Count.txt");
    char ch;
    if(!file)
    {
        cout << "File doesnot exist!\n";
        exit(1);
    }
    file.seekg(4, ios :: beg);
    file>>ch;
    cout << ch;
    file.seekg(0, ios :: end);
    // int k = file.tellg();
    // cout << k << endl;
    // char ch;
    // for(int i = 1; i <= k; i++)
    // {
    //     file.seekg(-i, ios :: end);
    //     file.get(ch);
    //     cout << ch;
    // }
    // file.close();
    return 0;
}