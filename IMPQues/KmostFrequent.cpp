#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> topK(vector<int> &v, int k)
{
    map<int, int> m;
    vector<int> vec;
    for(int i = 0; i < v.size(); i++)
    {
        if(m[v[i]])
            m[v[i]]++;
        else
            m[v[i]] = 1;
    }
    priority_queue<pair<int, int>> pq;
    for(auto i : m)
        pq.push({i.second, i.first});
    for(int i = 0; i < k; i++)
    {
        vec.push_back(pq.top().second);
        pq.pop();
    }
    return vec;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    

    vector<int> ans;
    ans = topK(v, 2);
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}