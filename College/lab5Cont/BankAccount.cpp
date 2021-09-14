#include<iostream>
#include<string.h>
using namespace std;
class BankAccount
{
    char *name;
    int ID;
    int account_no;
    double account_balance;
    char *Email;
    public:
    BankAccount()//default constructor
    {
        name=new char[10];
        ID=23;
        account_no=1234;
        account_balance=1000;
        Email=new char[20];
    }
    BankAccount(char *n,int id,int no,int b,char *E)//parametrized constructor
    {
        name=new char[strlen(n)+1];
        strcpy(name,n);
        ID=id;
        account_no=no;
        account_balance=b;
        Email=new char[strlen(E)+1];
        strcpy(Email,E);
    }
    BankAccount(const BankAccount &o)//copy constructor
    {
        ID=o.ID;
        account_no=o.account_no;
        account_balance=o.account_balance;
        name=new char[strlen(o.name)+1];
        strcpy(name,o.name);
        Email=new char[strlen(o.Email)+1];
        strcpy(Email,o.Email);

    }
    void getbalance()
    {
        double amount;
        cout<<"Enter amount to deposit"<<endl;
        cin>>amount;
        account_balance+=amount;
    }
    void withdraw(int amount)
    {
        if(account_balance>500)
        account_balance-=amount;
        else
        cout<<"You cant withdraw"<<endl;
    }
    void display()
    {
        cout<<"Name is "<<name<<endl;
        cout<<"Id is "<<ID<<endl;
        cout<<"Account_no is "<<account_no<<endl;
        cout<<"Account_balance is "<<account_balance<<endl;
        cout<<"Email is "<<Email<<endl;

    }
    friend void maximum(BankAccount *ob, int n);
};

void maximum(BankAccount *ob, int n)
{
    BankAccount temp = ob[0];
    for(int i = 1; i < n; i++)
    {
        if(temp.account_balance < ob[i].account_balance)
            temp = ob[i];
    }
    temp.display();
}

int main()
{
    int n;
    cout<<"Enter no of customer"<<endl;
    cin>>n;
    char name[10],email[20];
    int id,ac_no;
    double balance;
    BankAccount b[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the details for customer " << i + 1 << endl;
        cout << "Name: ";
        getchar();
        gets(name);
        cout << "ID: ";
        cin >> id;
        cout << "Acct Num: ";
        cin >> ac_no;
        cout << "Balance: ";
        cin >> balance;
        cout << "Email: ";
        getchar();
        gets(email);
        b[i] = BankAccount(name, id, ac_no, balance, email);
    }
    
    maximum(b, n);
}