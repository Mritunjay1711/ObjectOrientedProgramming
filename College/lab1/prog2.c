#include<stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks[5];
    float total;
    float percent;
};

void printStruct(struct student s_26[], int n_26)
{
    for (int i_26 = 0; i_26 < n_26; i_26++)
    {
        printf("Student details\n");
        printf("Name: %s\n", s_26[i_26].name);
        printf("Roll: %d\n", s_26[i_26].roll);
        printf("Marks: ");
        for (int j_26 = 0; j_26 < 5; j_26++)
        {
            printf("%.2f ", s_26[i_26].marks[j_26]);
        }
        printf("\n");
        printf("Total marks: %.2f\n", s_26[i_26].total);
        printf("Percentage : %.2f\n", s_26[i_26].percent);
    }
}

void calcPerTotal(struct student s[], int n)
{
    for (int i_26 = 0; i_26 < n; i_26++)
    {
        float sum_26 = 0;
        for (int j_26 = 0; j_26 < 5; j_26++)
        {
            sum_26 += s[i_26].marks[j_26];
        }
        s[i_26].total = sum_26;
        s[i_26].percent = sum_26 / 5;
    }
}

void findRoll(struct student s_26[], int n_26, int roll_26)
{
    for (int i_26 = 0; i_26 < n_26; i_26++)
    {
        if (s_26[i_26].roll == roll_26)
        {
            printf("Student details\n");
            printf("Name: %s\n", s_26[i_26].name);
            printf("Roll: %d\n", s_26[i_26].roll);
            printf("Marks: ");
            for (int j_26 = 0; j_26 < 5; j_26++)
            {
                printf("%.2f ", s_26[i_26].marks[j_26]);
            }
            printf("\n");
            printf("Total marks: %.2f\n", s_26[i_26].total);
            printf("Percentage : %.2f\n", s_26[i_26].percent);
        }
        else
            printf("Not Found!");
    }
}

void findPercent(struct student s_26[], int n_26, int lower_26, int upper_26)
{
    for (int i_26 = 0; i_26 < n_26; i_26++)
    {
        if (s_26[i_26].percent >= lower_26 && s_26[i_26].percent <= upper_26)
        {
            printf("Student details\n");
            printf("Name: %s\n", s_26[i_26].name);
            printf("Roll: %d\n", s_26[i_26].roll);
            printf("Marks: ");
            for (int j_26 = 0; j_26 < 5; j_26++)
            {
                printf("%.2f ", s_26[i_26].marks[j_26]);
            }
            printf("\n");
            printf("Total marks: %.2f\n", s_26[i_26].total);
            printf("Percentage : %.2f\n", s_26[i_26].percent);
        }
        else    
            printf("Not found!");
    }
}

void swapStruct(struct student *s1_26, struct student *s2_26)
{
    struct student temp_26 = *s1_26;
    *s1_26 = *s2_26;
    *s2_26 = temp_26;
}

// This function will sort the array of students in ascending order of their total marks
void sortAscend(struct student s_26[], int n_26)
{
    for (int i_26 = 0; i_26 < n_26 - 1; i_26++)
    {
        for (int j_26 = 0; j_26 < (n_26 - i_26 - 1); j_26++)
        {
            if (s_26[j_26].total > s_26[j_26 + 1].total)
            {
                swapStruct(&s_26[j_26], &s_26[j_26 + 1]);
            }
        }
    }
}

int main()
{
    int n_26;
    printf("Enter the number of students: ");
    scanf("%d", &n_26);
    struct student s_26[n_26];
    printf("\nEnter the details of students:\n");
    for (int i_26 = 0; i_26 < n_26; i_26++)
    {
        printf("Enter the name of student %d:", i_26 + 1);
        scanf(" %[^\n]", s_26[i_26].name);
        printf("Enter the roll of student %d:", i_26 + 1);
        scanf("%d", &s_26[i_26].roll);
        printf("Enter the marks of 5 subjects: ");
        for (int j_26 = 0; j_26 < 5; j_26++)
        {
            scanf("%f", &s_26[i_26].marks[j_26]);
        }
    }

    calcPerTotal(s_26, n_26);
    int roll_26;
    printf("Enter the roll you want to search: ");
    scanf("%d", &roll_26);
    findRoll(s_26, n_26, roll_26);
    findPercent(s_26, n_26, 60, 70);
    printStruct(s_26, n_26);
    sortAscend(s_26, n_26);
    printStruct(s_26, n_26);

    return 0;
}

/*  INPUT
 5
 m
 1
 60 70 80 90 100
 j
 2
 88 74 57 66 32
 k
 3
 11 23 35 76 59
 l
 4
 51 62 63 84 45
 n
 5
 91 82 73 64 55
 */