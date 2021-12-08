#include<iostream>
#include<vector>
using namespace std;

template<class T>
class set
{
    T *arr;
    int n;
public:
    set(){}
    set(T *ar, int a)
    {
        n = a;
        arr = new T[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = ar[i];
        }
    }

    set(const T &ob)
    {
        n = ob.n;
        arr = new T[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = ob.arr[i];
        }
    }
    set intersection(set ob1, set ob2)
    {
        int k = 0;
        int arr[100];
        for(int i = 0; i < ob1.n; i++)
        {
            for(int j = 0; j < ob2.n; j++)
            {
                if(ob1.arr[i] == ob2.arr[j])
                {
                    arr[k++] = ob1.arr[i];
                }
            }
        }
        set temp;
        temp.n = k;
        temp.arr = new T[temp.n];
        for(int i = 0; i < temp.n; i++)
        {
            temp.arr[i] = arr[i];
        }
        return temp;
    }

    set Union(set ob)
    {
        int arr2[n + ob.n], arr3[n + ob.n], temp, k = 0;
        temp = n + ob.n;
        for(int i = 0; i < temp; i++)
        {
            if(i < n)
            {
                arr2[i] = arr[i];
            }
            else
            {
                arr2[i] = ob.arr[i - n];
            }
        }
        for(int i = 0; i < temp; i++)
        {
            int flag = 1;
            for(int j = i + 1; j < temp; j++)
            {
                if(arr2[i] == arr2[j])
                    flag = 0;
            }
            if(flag)
                arr3[k++] = arr2[i];
        }

        set obj;
        obj.n = k;
        obj.arr = new T[n];
        for(int i = 0; i < obj.n; i++)
        {
            obj.arr[i] = arr3[i];
        }
        return obj;
    }
    void display()
    {
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main(){
    int arr[] = {2, 5, 1, 4, 9};
    int arr2[] = {1, 9, 3, 5, 4};
    set<int> ob1(arr, 5);
    set<int> ob2(arr2, 5);
    set<int> ob3, ob8;
    ob1.display();
    ob2.display();
    ob3 = ob3.intersection(ob1, ob2);
    ob8 = ob1.Union(ob2);
    ob3.display();
    ob8.display();


    char cArr[] = {'a', 'i', 'e', 'w', 'j'};
    char cArr2[] = {'i', 'q', 'j', 'o', 'c'};
    set<char> ob4(cArr, 5);
    set<char> ob5(cArr2, 5), ob6, ob7;
    ob6 = ob6.intersection(ob4, ob5);
    ob7 = ob4.Union(ob5);
    ob7.display();
    ob6.display();
    return 0;
}