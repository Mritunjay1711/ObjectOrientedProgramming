#include <iostream>
using namespace std;

class A
{
    int num;
    static int max;

public:
    A(int a = 0) { num = a; }
    friend void findMax(A *ob, int n);
    static int returnMax()
    {
        return max;
    }
    void display()
    {
        cout << "Num: " << num << endl;
    }
};

int A::max;

void findMax(A *ob, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (ob[i].num > A :: max)
            A :: max = ob[i].num;
    }
}

int main()
{
    int n, data;
    cout << "Enter the number of objects: ";
    cin >> n;
    A ob[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data for ob " << i << ": ";
        cin >> data;
        ob[i] = A(data);
    }
    findMax(ob, n);
    cout << "Maximum element in array of objects: " << A :: returnMax() << endl;
    return 0;
}