#include<iostream>
#include<fstream>
using namespace std;

int isSpecial(char ch)
{
    if(ch == '@' || ch == '#' || ch == '*' || ch == '&' || ch == '%')
        return 1;
    return 0;
}

int isDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
        return 1;
    return 0;
}

int isAlpha(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        return 1;
    return 0;
}

int main(){
    fstream file;
    file.open("Password.txt", ios :: out);
    char pass[20];
    cout << "Enter the password: ";
    cin >> pass;
    int flagS = 0, flagN = 0, flagSC = 0, flagAlpha = 0, i = 0;
    int size = 0;

    while(pass[i] != '\0')
    {
        if(isAlpha(pass[i]))
            flagAlpha = 1;
        if(isDigit(pass[i]))
            flagN = 1;
        if(isSpecial(pass[i]))
            flagSC = 1;
        size++;
        i++;
    }
    if(size >= 8 && size <= 16)
        flagS = 1;
    try{
        if(flagS && flagN && flagSC && flagAlpha)
        {
            cout << "Password is strong!\n";
            file << pass << endl;
        }
        else
            throw 1;
    }
    catch(int a)
    {
        cout << "Password doesnot meet the minimum requirements!\n";
    }
    return 0;
}