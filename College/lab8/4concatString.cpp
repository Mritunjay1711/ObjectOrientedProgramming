#include<iostream>
#include<string.h>
using namespace std;

class str
{
    int l;
    char *arr;
public:
    str()
    {
        l = 1;
        arr = new char[l];
    }
    str(const char *n)
    {
        l = strlen(n);
        arr = new char[l + 1];
        strcpy(arr, n);
    }
    str(const str &ob)
    {
        l = ob.l;
        delete[] arr;
        arr = new char[l + 1];
        strcpy(arr, ob.arr);
    }
    void display()
    {
        cout << arr << endl;
    }
    ~str()
    {
        delete[] arr;
    }
    str operator+(str ob);
    str operator=(const str &ob);
};

str str :: operator+(str ob)
{
    str temp;
    temp.l = l + ob.l;
    temp.arr = new char[temp.l + 1];
    strcpy(temp.arr, arr);
    strcat(temp.arr, ob.arr);
    // temp.display();
    return temp;
}

str str :: operator=(const str &ob)
{
    l = ob.l;
    arr = new char[l + 1];
    strcpy(arr, ob.arr);
    return *this;
}

int main(){
    str ob1("hello"), ob2("world"), ob3;
    ob1.display();
    ob2.display();
    ob3 = ob1 + ob2;
    ob1.display();
    ob2.display();
    ob3.display();

    return 0;
}