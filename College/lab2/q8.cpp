#include<iostream>
#include<string.h>
using namespace std;

class bank_account
{
    char name[20];
    int acc_num;
    char AccType[20];
    float balance;
    int checkBalance(int amount);
    
    public:
        void setData(char *p, int accNum, char *accType, float bal);
        void deposit(float amount);
        void withdraw(float amount);
        void display() const;
};

int bank_account :: checkBalance(int amount)
{
    if((balance - amount) < 500)
        return 0;
    else
        return 1;
}

void bank_account :: setData(char *p, int accNum, char *accType, float bal)
{
    strcpy(name, p);
    acc_num = accNum;
    strcpy(AccType, accType);
    balance = bal;
}

void bank_account :: deposit(float amount)
{
    balance += amount;
    cout << amount << " has been deposited to your account!" << endl;
}

void bank_account :: withdraw(float amount)
{
    if(checkBalance(amount))
    {
        balance -= amount;
        cout << "Transaction Successful!" << endl;
    }
    else
        cout << "You do not have sufficient amount!" << endl;
}

void bank_account :: display() const
{
    cout << "Name: " << name << endl;
    cout << "Account number: " << acc_num << endl;
    cout << "Account type: " << AccType << endl;
    cout << "Balance: " << balance << endl;
}

int main(){
    char name[20], accType[20];
    int accNum_26, amount_26, a_26;
    float accBal_26;
    bank_account acc_26;

    cout << "Enter name: ";
    gets(name);
    cout << "Enter account number: ";
    cin >> accNum_26;
    cout << "Enter account type: ";
    getchar();
    gets(accType);
    cout << "Enter the amount in account: ";
    cin >> accBal_26;
    
    acc_26.setData(name, accNum_26, accType, accBal_26);

    do
    {
        cout << "Enter\n1 to deposit\n2 to withdraw\n0 to exit" << endl;
        cin >> a_26;
        if(a_26 == 1)
        {
            cout << "Enter the amount to deposit: " << endl;
            cin >> amount_26;
            acc_26.deposit(amount_26);
        }
        else if(a_26 == 2)
        {
            cout << "Enter the amount to Withdraw: " << endl;
            cin >> amount_26;
            acc_26.withdraw(amount_26);
        }
        else
            break;
    }while(a_26);    
    
    acc_26.display();
    return 0;
}