#include<stdio.h>
#include<string.h>
int main()
{
	char str[99];
	scanf("%[^
]s",str);
	int i,x=0;
	for(i=0;str[i]!=NULL;i++)
	{
	    if(str[i]>=65 && str[i]<=90)
	    x=x+1;
	}
	printf("%d",x);
}