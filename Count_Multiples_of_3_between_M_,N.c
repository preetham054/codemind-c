#include<stdio.h>
int main()
{
    int i,a,b,c=0;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        if(i%3==0)
        {
            c++;
        }
    }
    printf("%d",c);
}