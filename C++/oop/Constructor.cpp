#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        //Creating a constructor
        // Constructor is a special member function with the same name as of class.
        //It is used to initialize the objects of its class
        //It is automatically invoked whenever an object is created;
        Complex(void);
        void display()
        {
            cout << "Number is " << a << " + " << b << "i" << endl;
        }
};

Complex :: Complex(void)  // ---> This is a default constructor
{
    a = 0;
    b = 0;
}

int main(){
    Complex c1; 
    c1.display();
    return 0;
}

/***********************************
   Characteristics of Constructors
 * It should be declared in the public section of the class
 * They are automatically invoked whenever the object is created
 * They cannot return values and do not have return types
 * It can have default arguments
 * We cannot refer to their address
 **************************************/