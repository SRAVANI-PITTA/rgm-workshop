#include<stdio.h>
int main()
{
    int n,sum;
    scanf("%d",&n);
    while(n!=4)
    {
        sum=0;
        while(n)
        {
        sum=sum+pow(n%10,2);
        n=n/10;
        }
    n=sum;
    if(n==1)break;
    }
if(n==4)
printf("unhappy");
else
printf("happy");
return 0;
}

