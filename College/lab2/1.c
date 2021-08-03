#include<stdio.h>
#include<stdlib.h>

struct stud
{
    int a;
    int b;
};

int main()
{
    struct stud s, *p;
    p = &s;
    p->b = 10;
    p->a = 20;

    printf("%d\n", p->b);
    return 0;
}