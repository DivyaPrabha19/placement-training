#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter a value : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
		}
	if(sum==n)
	{
		printf("The given number %d is a perfect number\n",n);
	}
	else if(sum<n)
	{
		printf("The given number %d is a deficient number\n",n);
	}
else
	{
		printf("The given number %d is an abundant number\n",n);
	}
}


