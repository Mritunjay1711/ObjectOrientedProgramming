#include<iostream>
using namespace std;

class student
{
    protected:
        int roll, marks1, marks2;
    public:
        void getData(int r, int m1, int m2)
        {
            roll = r;
            marks1 = m1;
            marks2 = m2;
        }
};

class sports
{
    protected:
        int sports_marks;
    public:
        void getData(int sm)
        {
            sports_marks = sm;
        }
};

class result : public student, public sports
{
    int tot;
    float avg;
public:
    void getData(int r, int m1, int m2, int sm)
    {
        student :: getData(r, m1, m2);
        sports :: getData(sm);
    }

    void display()
    {
        tot = marks1 + marks2 + sports_marks;
        avg = tot/3.0;
        cout << "Roll no: " << roll << "\nTotal : " << tot << endl;
        cout << "Average: " << avg << endl;
    }
};

int main(){
    result ob1;
    int r, m1, m2, sm;
    cout << "Enter the roll: ";
    cin >> r;
    cout << "Enter the marks1: ";
    cin >> m1;
    cout << "Enter the marks2: ";
    cin >> m2;
    cout << "Enter the sports marks: ";
    cin >> sm;
    ob1.getData(r, m1, m2, sm);
    ob1.display();
    return 0;
}