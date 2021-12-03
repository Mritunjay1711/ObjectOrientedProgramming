#include<iostream>
#include<ctime>
using namespace std;

int main(){
    time_t now = time(0); // Gives Current time and date
    tm *ltm = localtime(&now); // To take year, month and data separately
    int year = 1900 + ltm->tm_year; // Year
    int month = 1 + ltm->tm_mon; // Month
    int date = ltm->tm_mday; // Date
    cout << year << endl;
    cout << month << endl;
    cout << date << endl;
    int eyear, emon, edate;
    cout << "Enter the expiry date in dd mm yyyy: ";
    cin >> edate >> emon >> eyear;
    try
    {
        if(eyear < year)
            throw 1;
        else if(eyear == year && emon < month)
            throw 1;
        else if(emon == month && edate < date)
            throw 1;
        cout << "Medicine is edible!\n";
    }
    catch(int a)
    {
        cout << "Medicine is expired!\n";
    }
    
    return 0;
}