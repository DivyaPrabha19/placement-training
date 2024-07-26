#include <stdio.h>
void main()
{
	int n,n1,n2,temp,j;
	printf("Enter how many numbers do you want : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	scanf("%d",&n1);
	scanf("%d",&n2);
	temp=n1;
	if(n2>n1)
	{
		n1=n2;
		n2=temp;
	}
	for(int i=3;i<=n;i++)
		{
			scanf("%d",&j);
			if(j>n2)
			{
				temp=n2;
				n2=j;
				if(j>n1)
				{
					temp=n1;
					n1=j;
					n2=temp;
				}
			}
		}
	printf("Largest = %d and second largest = %d\n",n1,n2);
}
