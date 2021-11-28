#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
    ofstream out;
    out.open("questions.txt");
    out << "Who is the prime minister of India?" << endl;
    out << "Which virus spread recently in Africa?" << endl;
    out << "Who won FIFA 2014 worldcup?" << endl;
    out.close();

    out.open("answers.txt");
    out << "Narendra modi" << endl;
    out << "Ebola" << endl;
    out << "Germany" << endl;
    out.close();

    char q[100], a[50];
    ifstream in;
    in.open("questions.txt");
    cout << "************** SAMPLE QUESTIONS**************";
    while (in)
    {
        in.getline(q, 100);
        cout << endl
             << q;
    }
    in.close();

    in.open("answers.txt");
    cout << "\n\n\n********************ANSWERS****************";
    in.seekg(0);
    while (in)
    {
        in.getline(a, 50);
        cout << endl
             << a;
    }
    in.close();
}