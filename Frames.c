#include<stdio.h>
int main()
{
    int n,m,x,wf,cost;
    scanf("%d%d%d",&n,&m,&x);
    wf=(n*2)+(m*2);
    cost=wf*x;
    printf("%d",cost);
}