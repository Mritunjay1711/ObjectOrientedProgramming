#include <iostream>
#include <string.h>
using namespace std;

class Account
{
protected:
    int acc_num_26;
    char name_26[30];
    float balance_26;

public:
    Account(int a, char *str, float b = 0)
    {
        acc_num_26 = a;
        strcpy(name_26, str);
        balance_26 = b;
    }
    virtual void deposit(float a) {}
    virtual void withdraw(float a) {}
    virtual void display() {}
};

class Savings : public Account
{
    float interest;
public:
    Savings(int a, char *str, float b = 0) : Account(a, str, b) {interest = balance_26 * .15;}
    void deposit(float a)
    {
        balance_26 += a;
        interest = balance_26 * .15;
    }
    void withdraw(float a)
    {
        if (balance_26 - a <= 1000)
            cout << "Insufficient Balance_26!\n";
        else
        {
            balance_26 -= a;
            interest = balance_26 * 0.15;
            cout << "Transaction complete!\n";
        }
    }
    void display()
    {
        cout << "Account number: " << acc_num_26 << endl;
        cout << "Name: " << name_26 << endl;
        cout << "Balance: " << balance_26 << endl;
        cout << "Interest: " << interest << endl;
    }
};

class Current : public Account
{
    float overdue_26 = 0;
public:
    Current(int a, char *str, float b = 0) : Account(a, str, b) { cout << "working\n"; }
    void deposit(float a)
    {
        balance_26 += a;
        cout << "working!\n";
    }

    void withdraw(float a)
    {
        if (balance_26 - a < 1000)
        {
            overdue_26 = (1000 - (balance_26 - a)) * 0.15;
            balance_26 -= a;
            cout << "Overdue: " << overdue_26 << endl;
        }
        else
        {
            balance_26 -= a;
            cout << "Transaction successful!\n";
        }
    }
    void display()
    {
        cout << "Account number: " << acc_num_26 << endl;
        cout << "Name: " << name_26 << endl;
        cout << "Balance: " << balance_26 << endl;
        cout << "Overdue: " << overdue_26 << endl;
    }
};

int main()
{
    Account *bptr[2];
    char name_26[20];
    int acc_num_26;
    float balance_26;
    cout << "Enter the Account number: ";
    cin >> acc_num_26;
    cout << "Enter the name: ";
    cin >> name_26;
    cout << "Enter the balance: ";
    cin >> balance_26;
    Savings ob1(acc_num_26, name_26, balance_26);
    bptr[0] = &ob1;
    bptr[0]->deposit(500);
    bptr[0]->withdraw(2000);
    bptr[0]->display();

    // For Current
    cout << "Enter the Account number: ";
    cin >> acc_num_26;
    cout << "Enter the name: ";
    cin >> name_26;
    cout << "Enter the balance: ";
    cin >> balance_26;
    Current ob2(acc_num_26, name_26, balance_26);
    bptr[1] = &ob2;
    bptr[1]->deposit(500);
    bptr[1]->withdraw(2000);
    bptr[1]->display();
    return 0;
}