#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            if(j < i)
            {
                printf(" ");
            }
            else
            {
                if(i % 2 == 0)
                {
                printf("%d", n - j);
                }
                else
                printf("%d",j + 1);
            }
            
        }
        printf("\n");
    }
    return 0;
}