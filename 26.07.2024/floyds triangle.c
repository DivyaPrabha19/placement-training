#include<stdio.h>
int main()
{
	int n,i,x=1,j=1,m=1;
	printf("Enter n value : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=x;j++)
				{
					printf("%d ",m);
					m++;
				}
			x++;
			printf("\n");
		}
}
