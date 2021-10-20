#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Mj"] = 98;
    marksMap["Adarsh"] = 2;

    marksMap.insert({{"Suniti", 99}, {"Ambrisha", 100}});
    map<string, int> :: iterator itr;
    for(itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;
    return 0;
}