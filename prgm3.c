#include<stdio.h>

int main(){

  int a,b,ADDITION,MULTIPLICATION,SUBSTRACTION,DIVISION,MODULUS;

  printf("ENTER THE FIRST NUMBER \n: ");
       scanf("%d",&a);


   printf("ENTER THE SECOND NUMBER \n: ");
        scanf("%d",&b);

        ADDITION = a+b;
        MULTIPLICATION = a*b;
        SUBSTRACTION = a-b;
        DIVISION = a/b;
        MODULUS = a%b;

    printf("\nADDITION OF TWO NUMBER IS : %d\n",ADDITION);
    printf("\nSUBSTRACTION OF TWO NUMBER IS : %d\n",SUBSTRACTION);
    printf("\nMULTIPLICATION OF TWO NUMBER IS : %d\n",MULTIPLICATION);
    printf("\nDIVISION OF TWO NUMBER IS : %d\n",DIVISION);
    printf("\nMODULUS OF TWO NUMBER IS : %d\n",MODULUS);

    return 0;




}