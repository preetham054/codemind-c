#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        e=0;
        f=0;
        c=i;
        while(c!=0)
        {
            d=c%10;
            if(d!=0 && i%d==0)
            {
                e=e+1;
            }
            f=f+1;
            c=c/10;
        }
        if(e==f)
        printf("%d ",i);
    }
}