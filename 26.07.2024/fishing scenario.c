Question:
Gopal went to river for fishing. Every time when he starts fishing he turns on a stop watch which will run backwards. if Gopal catches 2 fishes for every minute, Calculate how many fishes he will catch for n minutes by using while loop.

Answer:
#include<stdio.h>
int main()
{
	int time,total_fishes=0;
	printf("Enter the time in minutes : ");
	scanf("%d",&time);
	if(time<=0){
		printf("Invalid Time\n");
	}
	else{
		while(time>0){
			total_fishes+=2;
			time--;
		}
		printf("Total fishes : %d\n",total_fishes);
	}
	return 0;
}
