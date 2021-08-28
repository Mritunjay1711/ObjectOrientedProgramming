#include<iostream>
using namespace std;

class polynomial
{
    int n;
    int *arr;
    public:
        polynomial()
        {
            n = 0;
            arr = new int[1];
        }

        polynomial(int *array, int len)
        {
            n = len;
            arr = new int[n];
            for(int i = 0; i < len; i++)
            {
                arr[i] = array[i];
            }
        }

        polynomial(const polynomial &o)
        {
            n = o.n;
            arr = new int[n];
            for(int i = 0; i < n; i++)
            {
                arr[i] = o.arr[i];
            }
        }

        ~polynomial()
        {
            delete[] arr;
        }

        void display()
        {
            int i;
            for(i = n - 1; i > 0; i--)
            {
                cout << arr[i] << "x^" << i << " + ";
            }
            cout << arr[i] << "x^" << i << endl;
        }

        void add(polynomial p1, polynomial p2);
};

void polynomial :: add(polynomial p1, polynomial p2)
{
    n = (p1.n > p2.n) ? p1.n : p2.n;
    delete[] arr;
    arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        if(p1.n < i && p2.n < i)
        {
            arr[i] = p1.arr[i] + p2.arr[i];
        }
    }
}

int main(){
    int n;
    
    cout << "Enter the highest degree of polynomial: ";
    cin >> n;
    n++;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> arr[i];
    }
    polynomial o1(arr, n);

    cout << "Enter the highest degree of polynomial: ";
    cin >> n;
    n++;
    int arr2[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> arr2[i];
    }
    polynomial o2(arr2, n);
    polynomial o3;
    o3.add(o1, o2);
    o1.display();
    o2.display();
    o3.display();
    o3.display();
    return 0;
}