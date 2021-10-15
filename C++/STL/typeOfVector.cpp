#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vec1; // Zero length vector
    vector<char> vec2(4); // 4-element vector
    display(vec2);
    vector<char> vec3(vec2); // 4-element vector from vec2
    display(vec3);
    vector<int> vec4(6, 13); // 6-element vector of 13s
    display(vec4);
    return 0;
}