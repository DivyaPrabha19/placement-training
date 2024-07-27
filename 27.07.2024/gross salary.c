#include<stdio.h>
int main()
{
	int bs,da,hra,gsc;
	scanf("%d",&bs);
	scanf("%d",&da);
	scanf("%d",&hra);
	gsc=bs+da*bs/100+hra*bs/100;
	printf("%d",gsc);
	return 0;
}
