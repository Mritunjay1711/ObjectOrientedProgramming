#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long int countSubarrayWithEqualZeroAndOne(int arr[], int n)
{

    unordered_map<int, int> m;
    int count = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] ? 1 : -1;

        if (sum == 0)
            count++;

        if (m[sum])
            count += m[sum];
        
        // cout << count << " " << m[sum] << endl;
        m[sum]++;
    }
    return count;
}

int main()
{
    int arr[] = {1, 0, 0, 1, 0, 1, 1};
    cout << countSubarrayWithEqualZeroAndOne(arr, 7);
    return 0;
}