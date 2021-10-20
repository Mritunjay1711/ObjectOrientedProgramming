#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> arrayVal;
    arrayVal[3] = 8;
    arrayVal[2] = 3;
    arrayVal[1] = 6;
    map<int, int> :: iterator iter;
    for(iter = arrayVal.begin(); iter != arrayVal.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";

    }
    return 0;
}