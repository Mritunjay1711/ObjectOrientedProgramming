#include<iostream>
using namespace std;

int path(int m, int n)
{
    int arr[m][n];
    for(int i = 0; i < m; i++)
    {
        arr[i][0] = 1;
    }
    for(int i = 0; i < n; i++)
    {
        arr[0][i] = 1;
    }

    for(int i = 1; i < m; i++)
    {
        for(int j = 1; j < n; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    return arr[m - 1][n - 1];
}

int main(){
    cout << "No. of paths: " << path(3, 4) << endl;
    return 0;
}