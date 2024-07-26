#include<stdio.h>
void main()
{
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements: ");
	for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
	printf("The elements of array: ");
	for(int i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
	printf("\n");
}
