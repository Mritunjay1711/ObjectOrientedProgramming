#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file, file2;
    file.open("Output.txt", ios :: out | ios :: in | ios :: trunc);
    char str[100], str2[] = {"Are you"};
   
    cin.getline(str, 100);
    file << str;

    file2.open("CopyOutput.txt", ios :: out);

    file.seekg(0);
    int j = 0;
    while(file)
    {
        file.get(str[j++]);
    }
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == 'I' && str[i + 2] == 'a' && str[i + 3] == 'm')
        {
            file2 << str2;
            i += 4;
        }
        else
        {
            file2.put(str[i]);
            i++;
        }
    }
    file.close();
    file2.close();
    remove("Output.txt");
    rename("CopyOutput.txt", "Output.txt");
    file.open("Output.txt", ios :: in);
    
    j = 0;
    while(file)
    {
        file.get(str[j++]);
    }
    cout << str << endl;
    file.close();
    return 0;
}