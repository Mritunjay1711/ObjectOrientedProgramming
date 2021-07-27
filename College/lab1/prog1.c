#include<stdio.h>

struct student{
    char name[50];
    int roll;
    float marks[5];
};



int main()
{
    struct student s_26[5];
    printf("Enter the details of students:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the name of student %d:", i + 1);
        scanf("%s", s_26[i].name);
        printf("Enter the roll of student %d:", i + 1);
        scanf(" %d", &s_26[i].roll);
        printf("Enter the marks of 5 subjects: ");
        for(int j = 0; j < 5; j++)
        {
            scanf("%f", &s_26[i].marks[j]);
        }
    }

    for(int i = 0; i < 5; i++)
    {
        printf("Student %d details\n", i + 1);
        printf("Name: %s\n", s_26[i].name);
        printf("Roll: %d\n", s_26[i].roll);
        printf("Marks: ");
        for(int j = 0; j < 5; j++)
        {
            printf("%.2f ", s_26[i].marks[j]);
        }
        printf("\n");
    }
    
    return 0;
}