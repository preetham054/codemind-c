#include<stdio.h>
int main()
{
	int i,j,r,c,sum;
	scanf("%d%d",&r,&c);
	int a[r][c];
		for(i=0;i<r;i++)
	{
	    sum=0;
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
		printf("%d ",sum);
	}
}
