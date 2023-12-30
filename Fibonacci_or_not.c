#include<stdio.h>
int main()
{
    int a,c,b=1,d=0,i=0;
    scanf("%d",&a);
    while(i>=0)
    {
        c=i+b;
        if(c==a)
        {
        d=1;
        printf("True");
        }
        i=b;
        b=c;
    }
    if(d==0)
    printf("False");
}