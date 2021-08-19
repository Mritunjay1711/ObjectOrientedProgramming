#include<iostream>
#include<string.h>
using namespace std;

class Student{
    char name_26[20];
    int roll_26;
    float total_marks_26;
    static float avg_26;
    public:
        friend void Average(Student *s, int n);
        void setData(char *p, int r, float tot)
        {
            strcpy(name_26, p);
            roll_26 = r;
            total_marks_26 = tot;
        }
        
        void display()
        {
            cout << "Name: " << name_26 << endl;
            cout << "Roll: " << roll_26 << endl;
            cout << "Total marks: " << total_marks_26 << endl;
        }
        
};

float Student :: avg_26;

void Average(Student *s, int n){
    float t = 0;
    for(int i = 0; i < n; i++)
        t += s[i].total_marks_26;
    
    Student::avg_26 = t/n;
    cout << "The average marks scored by students is " << Student :: avg_26 << endl;
}


int main(){
    int n_26, roll_26;
    char name_26[20];
    float marks_26; 
    cout << "Enter the number of students: ";
    cin >> n_26;
    Student ob_26[n_26];
    for(int i = 0; i < n_26; i++)
    {
        cout << "Enter the name: ";
        getchar();
        gets(name_26);
        cout << "Enter the roll: ";
        cin >> roll_26;
        cout << "Enter the total marks scored: ";
        cin >> marks_26;
        ob_26[i].setData(name_26, roll_26, marks_26);
    }
    Average(ob_26, n_26);
    return 0;
}