#include<stdio.h>

int main()
{
    int n;
    double m;

    scanf("%d",n);
    scanf("%f",m);
    

    if(n<m)
    {
        if(!n%5)
        {
            m=m-n-0.50;
            printf("%.2f",m);
        }
        else
        printf("%.2f",m);

    }
    else
    printf("%.2f",m);

    return 0;
}