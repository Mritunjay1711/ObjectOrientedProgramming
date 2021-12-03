#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char email[40];
    cout << "Enter the string: ";
    cin >> email;
    try
    {
        int flag = 0, flag2 = 1, size = strlen(email);
        char ch[] = ".com";
        for(int i = 0; i < 4; i++)
        {
            if(ch[i] != email[size - 4 + i])
                flag2 = 0;
        }

        for(int i = 0; email[i] != '\0'; i++)
        {
            if(email[i] == '@')
                flag = 1;
        }
        if(!flag || !flag2)
            throw '@';
        else
            cout << "Email is correct!\n";
        
    }
    catch(char c)
    {
        cout << "Invalid Email!\n";
    }
    return 0;
}