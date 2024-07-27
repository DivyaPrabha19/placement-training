#include<stdio.h>
int main(){
int w;
float h;
float bmi;
scanf("%d",&w);
scanf("%f",&h);
bmi= w/(h*h);
printf("%.2f",bmi);
return 0;
}


