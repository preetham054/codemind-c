#include<stdio.h>
int main()
{
    char str[99];
    scanf("%[^
]s",str);
    int v=0,i;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            v=v+1;
    }
    printf("%d",v);
}