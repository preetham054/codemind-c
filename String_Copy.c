#include<stdio.h>
#include<string.h>
int main()
{
	char str[99],str1[99];
	scanf("%[^
]s",str);
	strcpy(str1,str);
	printf("%s",str1);
}