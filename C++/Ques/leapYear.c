#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("\nEnter the year:");
    scanf("%i",&year);

    if (year%4==0)
    {if (year%100==0){if (year%400==0) printf("leap year");} else printf("leapyear");
     }
     else printf("not leapyear");
    return 0;
}