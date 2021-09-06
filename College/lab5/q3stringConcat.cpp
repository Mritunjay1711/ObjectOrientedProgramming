#include<iostream>
#include<string.h>
using namespace std;

class myStr{
    char *str_26;
    int len_26;
    public:
        myStr(){
            str_26 = new char[1];
            len_26 = 0;
        }
        myStr(char *s)
        {
            len_26 =  strlen(s);
            str_26 = new char[len_26 + 1];
            strcpy(str_26, s);
        }

        myStr(const myStr &o)
        {
            len_26 = o.len_26;
            str_26 = new char[o.len_26 + 1];
            strcpy(str_26, o.str_26);
        }

        void display()
        {
            cout << str_26 << endl;
        }
        void concat(myStr o1, myStr o2);
        
        ~myStr()
        {
            delete[] str_26;
        }
};

void myStr :: concat(myStr o1, myStr o2)
{
    len_26 = strlen(o1.str_26) + strlen(o2.str_26);
    delete[] str_26; 
    str_26 = new char[len_26 + 1];
    strcpy(str_26, o1.str_26);
    strcat(str_26, o2.str_26);
}

int main(){
    char str_26[30];
    cout << "Enter the first string: ";
    gets(str_26);
    myStr s1_26(str_26);
    cout << "Enter the second string: ";
    gets(str_26);
    myStr s2_26(str_26);
    myStr s3_26;
    s3_26.concat(s1_26, s2_26);
    s1_26.display();
    s2_26.display();
    s3_26.display();
    return 0;
}