#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(a[i-1]%2!=0 && a[i+1]%2!=0)
            count=count+1;
        }
    }
    printf("%d",count);
}