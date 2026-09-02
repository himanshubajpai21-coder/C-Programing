#include<stdio.h>

int main(){

  int a,b,ADDITION,MULTIPLICATION,SUBSTRACTION,DIVISION,MODULUS;

  printf("ENTER THE FIRST NUMBER : ");
       scanf("%d",&a);


   printf("ENTER THE SECOND NUMBER : ");
        scanf("%d",&b);

        ADDITION = a+b;
        MULTIPLICATION = a*b;
        SUBSTRACTION = a-b;
        DIVISION = a/b;
        MODULUS = a%b;

    printf("ADDITION OF TWO NUMBER IS : %d\n",ADDITION);
    printf("SUBSTRACTION OF TWO NUMBER IS : %d\n",SUBSTRACTION);
    printf("MULTIPLICATION OF TWO NUMBER IS : %d\n",MULTIPLICATION);
    printf("DIVISION OF TWO NUMBER IS : %d\n",DIVISION);
    printf("MODULUS OF TWO NUMBER IS : %d\n",MODULUS);

    return 0;




}