#include<iostream>
#include<string.h>
using namespace std;

class Detail
{
    char name[30];
    char address[30];
    int mNo;
public:
    Detail(){}
    Detail(const char *n, const char *ad, int a)
    {
        strcpy(name, n);
        strcpy(address, ad); 
        mNo = a;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Meter No.: " << mNo << endl;
    }
};

class PowerBill : public Detail
{
    int nOfUnits;
    float tot;
public:
    PowerBill(){}
    PowerBill(const char *n, const char *ad, int a, int no) : Detail(n, ad, a)
    {
        nOfUnits = no;
        tot = 0;
    }
    void calc()
    {
        if(nOfUnits < 0)
        {
            cout << "Invalid input!\n";
            exit(1);
        }
        if(nOfUnits >= 1 && nOfUnits <= 50)
        {
            tot = 2.5 * nOfUnits;
        }
        else if(nOfUnits >= 51 && nOfUnits <= 100)
            tot = 5 * nOfUnits;
        else if(nOfUnits >= 101 && nOfUnits <= 200)
            tot = 6 * nOfUnits;
        else
            tot = 7.5 * nOfUnits;
    }
    void display()
    {
        show();
        cout << "Total unit: " << nOfUnits << endl;
        cout << "Total bill: Rs." << tot << endl;
    }

};

int main(){
    PowerBill ob("Divyansi", "Bengaluru", 402, 1000);
    ob.calc();
    ob.display();
    return 0;
}