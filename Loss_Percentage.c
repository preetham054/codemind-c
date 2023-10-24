#include<stdio.h>
int main()
{
    int x,y;
    float loss,losspercentage;
    scanf("%d%d",&x,&y);
    loss=(x-y);
    losspercentage=(loss/x)*100.0;
    printf("%.2f",losspercentage);
}