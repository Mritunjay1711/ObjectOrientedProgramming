#include <iostream>
using namespace std;

class Date
{
    int dd, mm, yy;

public:
    Date() {}
    Date(int a, int b, int c)
    {
        dd = a;
        mm = b;
        yy = c;
    }
    void display()
    {
        cout << "Date: " << dd << " " << mm << " " << yy << endl;
    }
    int isLeap()
    {
        if (yy % 4 == 0 || yy % 400 == 0)
            return 1;
        return 0;
    }
    int daySinceJan1()
    {
        int sum = 0;
        int larr[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (this->isLeap())
        {
            for (int i = 0; i < mm - 1; i++)
            {
                sum += larr[i];
            }
            sum += dd;
        }
        else
        {
            for (int i = 0; i < mm - 1; i++)
            {
                sum += arr[i];
            }
            sum += dd;
        }
        return sum;
    }
};

int main()
{
    int a, b, c;
    cout << "Enter the date dd mm yyyy format: ";
    cin >> a >> b >> c;
    Date ob(a, b, c);
    ob.display();
    cout << ob.daySinceJan1();
    return 0;
}