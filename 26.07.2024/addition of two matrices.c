#include<stdio.h>
void main()
{
	int r,c,sum;
	printf("Enter no of rows, columns: ");
	scanf("%d %d",&r,&c);
	int arr1[r][c],arr2[r][c];
	printf("Elements of matrix 1: ");
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				{
					scanf("%d",&arr1[i][j]);
				}
		}
	printf("Elements of matrix 2: ");
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				{
					scanf("%d",&arr2[i][j]);
				}
		}
	printf("Addition of matrices:\n");
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				{
					printf("%d ",arr1[i][j]+arr2[i][j]);
					
				}
			printf("\n");
		}
	
}
