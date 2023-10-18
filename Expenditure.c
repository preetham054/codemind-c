#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int spend=b*30;
if(a>=spend)
{
    printf("YES");
}
else
{
    printf("NO");
}
}