#include<iostream>
#include<cstring>
using namespace std;

class person
{
    char name[30];
    char address[50];
    char phone[10];
    float salary;
public:
    person(){}
    person(const char *n, const char *a, const char *ph, float s)
    {
        strcpy(name, n);
        strcpy(address, a);
        strcpy(phone, ph);
        salary = s;
    }
    float returnSalary()
    {
        return salary;
    }
    void personDisplay()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
        cout << "Salary: " << salary << endl;
    }
};

class household_expenditure : virtual public person
{
    float elecBill;
    int milkQuan;
    float milkPrice;
    float milkBill;
    float helperBill;
public:
    household_expenditure(){}
    household_expenditure(const char *n, const char *a, const char *ph, float s, float eB, int mQ, int mP, float hB) : person(n, a, ph, s)
    {
        elecBill = eB;
        milkQuan = mQ;
        milkPrice = mP;
        milkBill = milkQuan * milkPrice;
        helperBill = hB;
    }
    float returnHExpend()
    {
        return elecBill + milkBill + helperBill;
    }
    void HEDisplay()
    {
        cout << "Electric Bill: " << elecBill << endl;
        cout << "Milk Bill: " << milkBill << endl;
        cout << "Helper Bill: " << helperBill << endl;
    }
};

class extra_expenditure : virtual public person
{
    float loanPaid;
    float travelCost;
    float miscCost;
public:
    extra_expenditure(){}
    extra_expenditure(const char *n, const char *a, const char *ph, float s, float lP, float tC, float mC) : person(n, a, ph, s)
    {
        loanPaid = lP;
        travelCost = tC;
        miscCost = mC;
    }
    float returnEExpend()
    {
        return loanPaid + travelCost + miscCost;
    }
    void EEDisplay()
    {
        cout << "Loan paid: " << loanPaid << endl;
        cout << "Travel cost: " << travelCost << endl;
        cout << "Miscellaneous cost: " << miscCost << endl;
    }
};

class total_expenditure : public household_expenditure, public extra_expenditure
{
    float totalExpend;
public:
    total_expenditure(){}
    total_expenditure(const char *n, const char *a, const char *ph, float s, float eB, int mQ, int mP, float hB, float lP, float tC, float mC) : person(n, a, ph, s), household_expenditure(n, a, ph, s, eB, mQ, mP, hB), extra_expenditure(n, a, ph, s, lP, tC, mC)
    {
        totalExpend = returnHExpend() + returnEExpend();
            if(totalExpend > returnSalary())
                throw 1;
        
    }
    void Display()
    {
        personDisplay();
        HEDisplay();
        EEDisplay();
        cout << "Total Expenditure: " << totalExpend << endl;
    }
};

int main(){
    try{
        total_expenditure ob("Mj", "Patna", "7903066427", 50000, 1000, 50, 30, 2000, 10000, 10000, 5000);
        ob.Display();

    }
    catch(int a)
    {
        cout << "Your expenditure is more than your salary!\n";
    }
    cout << "Exiting main\n";
    return 0;
}