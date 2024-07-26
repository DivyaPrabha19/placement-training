#include<stdio.h>
void main()
{
	int integer,num;
	printf("Integer: ");
	scanf("%d",&integer);
	num=integer%100;
	if(integer<100)
	{
		printf("The number should be greater than %02d\n",integer);
	}
	else
	{
		printf("Last two digits: %02d\n",num);
	}
}
