#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }

        //Below line means that non member - sumComplex function is allowed to do anything with my private data members
        friend Complex sumComplex(Complex o1, Complex o2);
        void printNumber(){
            cout << "Your number is " << a << " + i" << b << endl;
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
     Complex o1, o2, o3;
     o1.setNumber(2, 5);
     o2.setNumber(3, 6);
     o3 = sumComplex(o1, o2);

     o1.printNumber();
     o2.printNumber();
     o3.printNumber();
    return 0;
}


/*
Properties of friend functions
1. Not in the scope of class
2. Since it is not in the scope of the class, it cannot be called from the object of that class.
3. Can be invoked without the help of any object.
4. Usually ocntains the objects as arguments
5. Can be declared inside public or pubic section of the class
6. It cannot access the members directly by their names and need object_name.member_name
*/