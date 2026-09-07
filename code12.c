// write a program to print the average of two number ;

# include<stdio.h>

int main()

{

    float num1 , num2 , average;

    printf("ENTER FIRST NUMBER :");
    scanf("%f",&num1);
    printf("ENTER SECOND NUMBER :");
    scanf("%f",&num2);

    average =(num1 + num2)/2;


    printf("AVERAGE OF TWO NUMBERS IS : %.2f",average);


   return 0;
}