#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=1;k<=i-1;k++)
        {
         printf(" "); 
        }
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
     }
}