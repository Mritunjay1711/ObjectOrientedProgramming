#include<iostream>
#include<string.h>
using namespace std;

class books
{
    char code[10];
    char name[20];
    float price;
    int quantity;
    float total;
    static int count;
    public:
        void setData(char *c, char *n, float p, int q)
        {
            strcpy(code, c);
            strcpy(name, n);
            price = p;
            quantity = q;
            total = p * q;
        }
        
        void display()
        {
            if(count < 1)
            {
                cout << "SI.No.\tCode\tName\tPrice\tQuantity\tTotal\n";
                cout << "--------------------------------------------------------------------\n";
                count++;
            }
            cout << count++ << "\t" << code << "\t" << name << "\t" << price << "\t" << quantity << "\t\t" << total << endl;
        }

        friend void calc(books *b, int a);
};

int books :: count;

void calc(books *b, int a)
{
    float temp;
    for(int i = 0; i < a; i++)
    {
        temp += b[i].total;
    }
    cout << "--------------------------------------------------------------------\n                                              Total = Rs." << temp << "/-\n";
}


int main(){
    int n_26, quantity_26;
    float price_26;
    char name_26[20], code_26[10];
    cout << "Enter the number of books: ";
    cin >> n_26;
    books b_26[n_26];
    for(int i = 0; i < n_26; i++)
    {
        cout << "Enter the code: ";
        getchar();
        gets(code_26);

        cout << "Enter the name: ";
        gets(name_26);

        cout << "Enter the price: ";
        cin >> price_26;
        cout << "Enter the quantity: ";
        cin >> quantity_26;
        b_26[i].setData(code_26, name_26, price_26, quantity_26);
    }

    for(int i = 0; i < n_26; i++)
    {
        b_26[i].display();
    }

    calc(b_26, n_26);
    return 0;
}