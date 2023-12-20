#include<stdio.h>
int main()
{
    int n,sum=0,f=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int av=sum/n;
    for(i=0;i<n;i++)
    {
        if(av==a[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}