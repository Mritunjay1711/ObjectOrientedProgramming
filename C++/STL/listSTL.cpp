#include<iostream>
#include<list>
using namespace std;

void display(list<int> &List)
{
    list<int> :: iterator iter;
    
    for(iter = List.begin(); iter != List.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}

int main(){
    list<int> list1; // List of 0 length
    list1.push_back(8);
    list1.push_back(6);
    list1.push_back(9);
    list1.push_back(3);

    display(list1);
    // list1.pop_front();
    // list1.pop_back();
    // list1.remove(9); // Remove all the occurences of elements

    // list1.sort();

    //Reversing the list
    // list1.reverse();
    
    // Inserting at desired position

    list<int> :: iterator iter = list1.begin();
    ++iter; // point to second position
    list1.insert(iter, 29); // Insert 29 at 2nd position
    ++iter;
    list1.insert(iter, 2, 88); // Insert two 88 at the position

    display(list1);

    list<int> list2(3); // empty list of size 3
    list<int> :: iterator it;
    it = list2.begin();
    *it = 34;
    it++;
    *it = 92;
    it++;
    *it = 28;

    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout << "After merging: ";
    display(list1);
    return 0;
}