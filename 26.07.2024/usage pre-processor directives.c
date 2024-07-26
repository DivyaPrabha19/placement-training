#include <stdio.h>
#include <math.h> 
#define PI 3.14

int main() {

	int r;
	printf("radius: ");
	scanf("%d",&r);
	printf("Area of the circle: %.2f square units\n",PI*pow(r,2));

}
