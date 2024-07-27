#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,i,count=0,sum=0;
	printf("");
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
		{
			if(i%9==0)
			{
				printf("%d ",i);
				sum=sum+i;
				count++;
			}
		}
	printf("\nNo.of integers: %d",count);
	printf("\nSum: %d",sum);
	return 0;
}
