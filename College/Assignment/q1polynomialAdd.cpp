#include<iostream>
using namespace std;

class polynomial
{
    int n;
    int *arr;
    public:
        polynomial(){}

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
        void multiply(polynomial p1, polynomial p2);
};

void polynomial :: add(polynomial p1, polynomial p2)
{
    n = (p1.n > p2.n) ? p1.n : p2.n;
    arr = new int[n];
    
    for(int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    for(int i = 0; i < p1.n; i++)
    {
        arr[i] += p1.arr[i];
    }

    for(int i = 0; i < p2.n; i++)
    {
        arr[i] += p2.arr[i];
    }
}

void polynomial :: multiply(polynomial p1, polynomial p2)
{
    n = p1.n + p2.n - 1;
    arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    for(int i = 0; i < p1.n; i++)
    {
        for(int j = 0; j < p2.n; j++)
        {
            arr[i+j] += p1.arr[i]*p2.arr[j];
        }
    }
}

int main(){
    int n_26;
    
    cout << "Enter the highest degree of polynomial: ";
    cin >> n_26;
    n_26++;
    int arr_26[n_26];
    for(int i = 0; i < n_26; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> arr_26[i];
    }
    polynomial o1_26(arr_26, n_26);

    cout << "Enter the highest degree of second polynomial: ";
    cin >> n_26;
    n_26++;
    int arr2_26[n_26];
    for(int i = 0; i < n_26; i++)
    {
        cout << "Enter the coefficient of degree " << i << ": ";
        cin >> arr2_26[i];
    }
    polynomial o2_26(arr2_26, n_26);
    polynomial o3_26;
    o3_26.add(o1_26, o2_26);
    polynomial o4_26;
    o4_26.multiply(o1_26, o2_26);
    o1_26.display();
    o2_26.display();
    o3_26.display();
    o4_26.display();

    return 0;
}