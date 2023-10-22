#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,hyp;
    scanf("%f%f",&a,&b);
    hyp=sqrt((a*a)+(b*b));
    printf("%.2f",hyp);
}