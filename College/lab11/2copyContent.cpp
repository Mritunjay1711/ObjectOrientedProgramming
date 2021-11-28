#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file1("2file1.txt");
    ofstream file2("2file2.txt");
    if(!file1 || !file2)
    {
        cout << "File doesnot exist!\n";
        exit(1);
    }
    char ch;
    while(file1)
    {
        file1.get(ch);
        file2.put(ch);
    }
    cout << "Content copied!\n";
    file1.close();
    file2.close();
    return 0;
}