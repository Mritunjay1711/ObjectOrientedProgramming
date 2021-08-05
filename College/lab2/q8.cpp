#include<iostream>
#include<string>
using namespace std;

class bank_account
{
    char name[20];
    int acc_num;
    char AccType[20];
    float balance;
    int checkBalance(int amount);
    public:
        void getData();
        void deposit();
        void withdraw();
        void display();

};

int bank_account :: checkBalance(int amount)
{
    if(balance >= amount)
        return 1;
    else
        return 0;
}

void bank_account :: getData()
{
    cout << "Enter name: ";
    gets(name);
    cout << "Enter account number: ";
    cin >> acc_num;
    cout << "Enter account type: ";
    getchar();
    gets(AccType);
    cout << "Enter the amount in account: ";
    cin >> balance;
}

void bank_account :: deposit()
{
    int amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    balance += amount;
}

void bank_account :: withdraw()
{
    int amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;

    if(checkBalance(amount))
    {
        balance -= amount;
        cout << "Transaction Successful!" << endl;
    }
    else
        cout << "You do not have sufficient amount!" << endl;
}

void bank_account :: display()
{
    cout << "Name: " << name << endl;
    cout << "Account number: " << acc_num << endl;
    cout << "Account type: " << AccType << endl;
    cout << "Balance: " << balance << endl;
}

int main(){
    bank_account acc_26;
    acc_26.getData();
    acc_26.deposit();
    acc_26.withdraw();
    acc_26.display();
    return 0;
}