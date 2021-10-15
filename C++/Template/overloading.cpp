#include<iostream>
using namespace std;

void func(int a)
{
    cout << "first func\n";
}

template<class T>
void func(T a)
{
    cout << "Templated func\n";
}

int main(){
    func(4); // Normal func will get priority => first func
    func(5.3); // Templated func
    return 0;
}