#include<stdio.h>
int main()
{
    int i,n,fact;
    printf("enter the n value");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\n factorial")
}