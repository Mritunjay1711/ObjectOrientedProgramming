#include<iostream>
using namespace std;

int mod(int a)
{
    return a > 0 ? a : -a;
}

void findSumCloseZero(int *arr, int n)
{
    int t1, t2, diff;
    t1 = arr[0];
    t2 = arr[1];
    diff = mod(0 - (t1 + t2)); // Gives the distance from 0
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n - 1; j++)
        {
            sum = arr[j] + arr[j + 1];
            int temp = mod(0-sum); // calc the distance from 0 of sum of every two pairs
            if(diff > temp) // if distance is less then updating the new values
            {
                t1 = arr[j];
                t2 = arr[j + 1];
                diff = temp;
            }
        }
    }
    cout << "Num are " << t1 << " and " << t2 << endl;
    cout << "Diff = " << diff << endl;
}

int main(){
    int arr[] = {1, 60, -10, 70, -80, 85};
    int n = 6;
    findSumCloseZero(arr, n);
    return 0;
}