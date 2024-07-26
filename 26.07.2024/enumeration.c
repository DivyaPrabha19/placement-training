#include <stdio.h>
	enum ShapeType {
   CIRCLE=0, 
SQUARE=1, 
RECTANGLE=2, 
TRIANGLE=3,
};

int main() {
    
    enum ShapeType shape;
    float radius, side, length, width, base, height,area;
	printf("0: Circle\n");
	printf("1: Square\n");
	printf("2: Rectangle\n");
	printf("3: Triangle\n");
	printf("Choose a shape: ");
	scanf("%d", &shape);
	switch (shape) {
		case 0:{
			printf("radius: ");
			scanf("%f", &radius);
			printf("Area of circle: %.2f\n", 3.14 * radius * radius);
			break;}
		case SQUARE:
		printf("side: ");
		scanf("%f", &side);
		area=side*side;
		printf("Area of square: %.2f\n", area);
			break;
		case RECTANGLE:
			printf("length and width: ");
			scanf("%f %f", &length, &width);
			area=length*width;
			printf("Area of rectangle: %.2f\n", area);
			break;
		case TRIANGLE:
		printf("base and height: ");
		scanf("%f %f",&base,&height);
		printf("Area of triangle: %.2f\n",0.5*base*height);
		break;
		default:
			printf("Invalid choice!\n");
			break;}
	return 0;



    
}
