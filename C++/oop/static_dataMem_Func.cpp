#include<iostream>
using namespace std;

class employee
{
    int id;
    static int count;

    public:
        void setData()
        {
            cout << "Enter the id" << endl;
            cin >> id;
            count++;
        }
        void getData()
        {
            cout << "The id of this employee is " << id << endl;
        }

        // This func can only access static variable in class
        static void getCount() 
        {
            cout << "The value of count is " << count << endl;
        }
};

int employee :: count;

int main(){
    employee mj, adarsh, suniti, aam;
    mj.setData();
    mj.getData();
    employee :: getCount();

    adarsh.setData();
    adarsh.getData();
    employee :: getCount();

    suniti.setData();
    suniti.getData();
    employee :: getCount();

    aam.setData();
    aam.getData();
    employee :: getCount();

    return 0;
}