#include<stdio.h>
//#define m 10
int main()
{
	//int mat[m][m];
	int rows,cols,isscalar=1;
	printf("Enter no of rows, columns: ");
	scanf("%d%d",&rows,&cols);
	int mat[rows][cols];
	printf("Enter the elements:\n");
	for(int i=0;i<rows;i++)
		{	for(int j=0;j<cols;j++)
			{scanf("%d",&mat[i][j]);}}
	int point=0;
	int i,j;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++)
			{
				if(i!=j&&mat[i][j]!=0){
				point=1;
				break;
			}}
		if(i==j&&mat[i][j]!=mat[i][j])
		{
			point=1;
			break;}
		}
	
if(point==1)
	{printf("Not a scalar matrix\n");}
	else if(point==0)
          printf("Scalar matrix\n");
		
}
