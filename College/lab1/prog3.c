#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    int age;
    float basicSalary;
    float grossSalary;
};


void calcGS(struct employee e_26[], int n_26)
{
    for(int i_26 = 0; i_26 < n_26; i_26++)
    {
        float s_26 = e_26[i_26].basicSalary;
        e_26[i_26].grossSalary = s_26 + (0.8 * s_26) + (0.1 * s_26);
    }
}

void printStruct(struct employee e_26[], int n_26)
{
    for(int i_26 = 0; i_26 < n_26; i_26++)
    {
        printf("Details of employee %d\n", i_26 + 1);
        printf("Name: %s\n", e_26[i_26].name);
        printf("ID: %d\n", e_26[i_26].id);
        printf("Age: %d\n", e_26[i_26].age);
        printf("Basic Salary: %.2f\n", e_26[i_26].basicSalary);
        printf("Gross Salary: %.2f\n", e_26[i_26].grossSalary);
    }
}

int main()
{
    int n_26;
    printf("Enter the number of employees: ");
    scanf("%d", &n_26);
    struct employee e_26[n_26];

    
    for(int i_26 = 0; i_26 < n_26; i_26++)
    {
        printf("Enter the details of employee %d\n", i_26 + 1);
        printf("Name: ");
        scanf("%s", e_26[i_26].name);
        printf("ID: ");
        scanf(" %d", &e_26[i_26].id);
        printf("Age: ");
        scanf("%d", &e_26[i_26].age);
        printf("Basic Salary: ");
        scanf("%f", &e_26[i_26].basicSalary);
    }

    calcGS(e_26, n_26);
    printStruct(e_26, n_26);    
    return 0;
}


/* INPUT
4
a
1
18
6000
b
2
20
8000
c
3
29
12999
d
4
42
39999
*/