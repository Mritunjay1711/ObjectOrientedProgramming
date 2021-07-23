#include<stdio.h>

int main(){
    int n,sum[1000];
    scanf("%d",&n);
    for(int x=0;x<n;x++)     //to take input
    {
        scanf("%d",&sum[x]);
    }

    for(int i=0;i<n;i++)   //to add the numbers
    {
        sum[i+1]=sum[i]+sum[i+1];

    }

    printf("%d",sum[n-1]);    //to print


    return 0;
}