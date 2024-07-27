Question:
Problem Description:

Ramesh works as a Mess supervisor in an engineering college hostel, where different messes are available based on the years. The student count varies daily in all the hostels due to continuous holidays. Since Ramesh is in charge of the cooking team, he faces difficulty in calculating the quantity of food that needs to be prepared because of the varying student count. Even if a small quantity of food is prepared by the cooking team, it should be divided equally among the number of messes. Ramesh needs an automated software to identify the amount of food available (in the number of packets) and the Mess count
Can you help him divide the food equally and also calculate the remaining quantity of food that will be available after sharing the food equally?

Constraints:
1≤ avl_quantity_food ≤105
1≤ mess_count ≤20

Input Format:
The input consists of two integers separated by a space, representing the available number of food packets (avl_quantity_food) and the available number of messes (mess_count) respectively

Output Format:
The output consists of two values separated by a space, representing the number of food packets that are equally shared by the messes and the remaining number of food packets available


ANSWER:
#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	c=a/b;
	d=a%b;
	printf("%d %d",c,d);
}
