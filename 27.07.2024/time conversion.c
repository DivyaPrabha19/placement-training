#include<stdio.h>
int main()
{
	int M,S,H;
	scanf("%d",&S);
	H=S/3600;
	M=(S%3600)/60;
	S=S%60;
	printf("%dH:%dM:%dS",H,M,S);
}
