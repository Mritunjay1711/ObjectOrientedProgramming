#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {
        for(int i = 0; i < n; i += k)
        {
            int left = i;
            int right = min(i + k - 1, n - 1);
            while(left < right)
            {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};

int main(){
    vector<long long> arr;
    for(int i = 1; i < 6; i++)
    {
        arr.push_back(i);
    }
    solution obj;
    obj.reverseInGroups(arr, 5, 3);
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}