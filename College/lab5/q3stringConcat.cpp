#include<iostream>
#include<string.h>
using namespace std;

class myStr{
    char *str;
    int len;
    public:
        myStr(){
            str = new char[1];
            len = 0;
        }
        myStr(char *s)
        {
            len =  strlen(s);
            str = new char[len + 1];
            strcpy(str, s);
        }

        myStr(const myStr &o)
        {
            len = o.len;
            str = new char[o.len + 1];
            strcpy(str, o.str);
        }

        void display()
        {
            cout << str << endl;
        }
        void concat(myStr o1, myStr o2);
};

void myStr :: concat(myStr o1, myStr o2)
{
    len = strlen(o1.str) + strlen(o2.str);
    delete[] str; 
    str = new char[len + 1];
    strcpy(str, o1.str);
    strcat(str, o2.str);
}

int main(){
    char str[30];
    cout << "Enter the first string: ";
    gets(str);
    myStr s1(str);
    cout << "Enter the second string: ";
    gets(str);
    myStr s2(str);
    myStr s3;
    s3.concat(s1, s2);
    s3.display();
    return 0;
}