#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int number, a;
    fstream myFile;
    myFile.open("text.txt", ios ::in | ios ::out | ios ::trunc);
    do
    {
        cout << "Enter the number: ";
        scanf("%d", &number);

        if (number > 0)
        {
            myFile << number;
        }
        else
        {
            break;
        }
        cout << "Do you want to continue 1 for yes 0 for no\n";
        cin >> a;

    } while (a);
    char c;
    myFile.seekg(0, ios ::end);
    int size = myFile.tellg();
    for (int i = 1; i <= size; i++)
    {
        myFile.seekg(-i, ios::end);
        myFile.get(c);
        printf("%c ", c);
    }
    return 0;
}