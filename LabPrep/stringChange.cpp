#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class Replace_string
{
    char *s;
    int length;

public:
    Replace_string()
    {
        length = 0;
        s = new char[length + 1];
    }

    Replace_string(char *n)
    {
        length = strlen(n);
        int i = 0, count = 0; 
        
        // Count number of I am in string
        while(n[i] != '\0')
        {
            if(n[i] == 'I' && n[i + 2] == 'a' && n[i + 3] == 'm')
                count++;
            i++;
        }


        length = length + (count * 3); // Assigning new length for string
        s = new char[length + 1]; // Allocating memory
        i = 0;
        int j = 0;
        char str[] = {"Are you"};


        while(n[i] != '\0')
        {
            if(n[i] == 'I' && n[i + 2] == 'a' && n[i + 3] == 'm')
            {
                strcpy(s + j, str);
                i += 4;
                j += 7;
            }
            else
            {
                s[j++] = n[i++]; 
            }
        }
        s[j] = '\0';
        
    }

    Replace_string(Replace_string &str)
    {
        length = str.length;
        s = new char[length + 1];
        strcpy(s, str.s);
    }
    
    void display()
    {
        cout << s << endl;
    }
};
int main()
{
    char str[1000];
    cin.getline(str, 1000);
    Replace_string ob(str);
    ob.display();
    return 0;
}