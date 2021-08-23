#include <iostream>
using namespace std;

struct date
{
    int dd, mm, yy;
};

class age
{
    struct date present;
    struct date birthday;

public:
    void setPresent(int d, int m, int y)
    {
        present.dd = d;
        present.mm = m;
        present.yy = y;
    }

    void setBirthday(int d, int m, int y)
    {
        birthday.dd = d;
        birthday.mm = m;
        birthday.yy = y;
    }
    void showAge();
};

void age ::showAge()
{
    int year, months, days;
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    
    if(birthday.dd > present.dd)
    {
        present.dd += month[birthday.mm - 1];
        present.mm--;
    }

    if(birthday.mm > present.mm)
    {
        present.yy--;
        present.mm += 12;
    }

    days = present.dd - birthday.dd;
    months = present.mm - birthday.mm;
    year = present.yy - birthday.yy;
    cout << "Your age is " << year << "years " << months << "months " << days << "days\n";
}

int main()
{
    age ob1;
    int d, m, y;
    cout << "Enter the present date in dd mm yyyy format: ";
    cin >> d >> m >> y;
    ob1.setPresent(d, m, y);
    cout << "Enter the Birth date in dd mm yyyy format: ";
    cin >> d >> m >> y;
    ob1.setBirthday(d, m, y);

    ob1.showAge();
    return 0;
}