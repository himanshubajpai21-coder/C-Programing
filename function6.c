# include<stdio.h>
float calculateareasquare(float a);
float calculateareacircle(float r, float pi);
float calculatearearectangle(float l, float b);

int main()
{
    float a,r,l,b;
    float pi = 3.14;

    printf("Enter the side of a square : ");
    scanf("%f",&a);

    printf("Enter the radius of a circle : ");
    scanf("%f",&r);

    printf("Enter the length of rectangle : ");
    scanf("%f",&l);

    printf("Enter the breath of rectangle : ");
    scanf("%f",&b);

    float squarearea = calculateareasquare(a);
    printf("Area of a square is : %.2f\n",squarearea);

    float areacircle = calculateareacircle(r,pi);
    printf("Area of a circle is : %.2f\n",areacircle);

    float rectanglearea = calculatearearectangle(l,b);
    printf("Area of a rectangle is : %.2f\n",rectanglearea);

    return 0;
}

float calculateareasquare(float a){
    return a*a;
}

float calculateareacircle(float r, float pi){
    return pi*r*r;
}

float calculatearearectangle(float l, float b){
    return l*b;
}