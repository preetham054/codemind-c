#include<stdio.h>
#include<string.h>
int main()
{
	char str[99];
	scanf("%[^
]s",str);
	int len=strlen(str);
	printf("%d",len);
}