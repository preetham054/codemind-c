#include<stdio.h>
int main()
{
    int n,r,sum=0,multi=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        multi=multi*r;
    }
    if(sum==multi)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}