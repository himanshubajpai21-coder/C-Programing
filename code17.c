# include<stdio.h>
int main()
{
    int choice ,addition, subtraction, multiplication, division, a, b;
    while(1)
    {
     printf("ENTER THE CHOICE \n");
     printf("1.addition\n2.substraction\n3.multiplication\n4.division\n5.exit\n");
     scanf("%d",&choice);
     
     printf("ENTER THE NUMBER: ");
     scanf("%d %d" , &a,&b);
     
     if (choice == 1)
     {
         addition = a+b;
         printf("addition is %d",addition);
     }

     
     else if (choice == 2)
     {
         subtraction = a-b;
         printf("subtraction is %d",subtraction);
     }
     
     else if (choice == 3)
     {
         multiplication = a*b;
         printf("multiplication is %d", multiplication);
     }
     else if (choice == 4)
     {
         division = a/b;
         printf("division is %d",division);
     }
return 0;
}
}













