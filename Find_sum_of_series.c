#include<stdio.h>
int main()
{
    float a=1,i=1,c=0,n;
    scanf("%f",&n);
    while(i<=n)
    {
        c=c+(1/i);
        i++;
    }
    printf("%.2f",c);
}