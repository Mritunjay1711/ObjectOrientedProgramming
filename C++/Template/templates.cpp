#include<iostream>
using namespace std;

template <class T>

class vector{
    public:
    T *arr;
    int size;
        vector(int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(vector &v){
            T d = 0;
            for(int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
                return d;
        }
};

int main(){
    vector <float>v1(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.0;
    v1.arr[2] = 1.8;
    vector <float>v2(3);
    v2.arr[0] = 1.3;
    v2.arr[1] = 3.4;
    v2.arr[2] = 5.2;
    float dot = v1.dotProduct(v2);
    cout << dot << endl;
    return 0;
}