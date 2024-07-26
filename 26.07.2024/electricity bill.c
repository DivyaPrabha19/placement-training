#include <stdio.h>
void main() {
	char name[25];
	int units;
  float sur=0,tot,amt;
	printf("Enter the customer name : ");
	scanf("%s",&name);
	printf("Enter the units consumed by customer : ");
	scanf("%d",&units);
	printf("Customer name : %s",name);
	printf("\nUnits consumed : %d",units);
	if(units<200)
	{
		amt=(float)units*0.8f;
		sur=0;tot=amt+sur;
	}
	else if(units>200&&units<=300)
	{
		amt=(float)units*0.9;
		sur=0;
		tot-amt+sur;
	}
	else if(units>300)
	{
		amt=(float)units*1;
		if(amt>400)sur=(float)amt*(0.15f);
		tot=sur+amt;
	}
	printf("\nAmount charged : %f",amt);
	printf("\nSurcharges : %f",sur);
	if(amt<100)amt=100;
	printf("\nTotal amount to be paid by the customer : %f\n",amt+sur);
}
