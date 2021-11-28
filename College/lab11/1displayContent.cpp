#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("1dummy.txt");
    char ch;
    if(!file)
    {
        cout << "File doesnot exist!\n";
        exit(1);
    }

    while(file)
    {
        file >> ch;
        cout << ch;
    }
    file.close();
    return 0;
}