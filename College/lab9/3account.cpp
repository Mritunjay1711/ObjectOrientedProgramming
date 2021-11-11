#include <iostream>
#include <string.h>
using namespace std;

class Account
{
protected:
    int acc_num;
    char name[30];
    float balance;

public:
    Account(int a, char *str, float b = 0)
    {
        acc_num = a;
        strcpy(name, str);
        balance = b;
    }
    virtual void deposit(float a) {}
    virtual void withdraw(float a) {}
    virtual void display() {}
};

class Savings : public Account
{
public:
    Savings(int a, char *str, float b = 0) : Account(a, str, b) {}
    void deposit(float a)
    {
        balance += a;
    }
    void withdraw(float a)
    {
        if (balance - a <= 1000)
            cout << "Insufficient Balance!\n";
        else
        {
            balance -= a;
            cout << "Transaction complete!\n";
        }
    }
    void display()
    {
        cout << "Account number: " << acc_num << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Current : public Account
{
public:
    Current(int a, char *str, float b = 0) : Account(a, str, b) { cout << "working\n"; }
    void deposit(float a)
    {
        balance += a;
        cout << "working!\n";
    }

    void withdraw(float a)
    {
        float overdue;
        if (balance - a < 1000)
        {
            overdue = (1000 - (balance - a)) * 0.15;
            balance -= a;
            cout << "Overdue: " << overdue << endl;
        }
        else
        {
            balance -= a;
            cout << "Transaction successful!\n";
        }
    }
    void display()
    {
        cout << "Account number: " << acc_num << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account *bptr[2];
    char name[20];
    int acc_num;
    float balance;
    cout << "Enter the Account number: ";
    cin >> acc_num;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the balance: ";
    cin >> balance;
    Savings ob1(acc_num, name, balance);
    bptr[0] = &ob1;
    bptr[0]->deposit(500);
    bptr[0]->withdraw(2000);
    bptr[0]->display();

    // For Current
    cout << "Enter the Account number: ";
    cin >> acc_num;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the balance: ";
    cin >> balance;
    Current ob2(acc_num, name, balance);
    bptr[1] = &ob2;
    bptr[1]->deposit(500);
    bptr[1]->withdraw(2000);
    bptr[1]->display();
    return 0;
}