#include<iostream>
#include<cstring>
using namespace std;

class Animal
{
    private:
        int legs;
        char sound[10];
    public:
        void setData(int a, char b[]);
        void getData(){
            cout<<"This animal has "<<legs<<" legs"<<endl;
            cout<<"This sound made by this animal is "<<sound<<endl;
        }
        
};

void Animal :: setData(int a, char b[])
{
    legs = a;
    strcpy(sound, b);
}

int main(){
    Animal dog;
    char sound[10] = "Bark";
    dog.setData(4, sound);
    dog.getData();
    return 0;
}