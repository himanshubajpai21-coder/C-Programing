# include<stdio.h>

int main(){

    int a,b,add,sub,mul,div,mod;
    

    
   
    printf("Enter the value of a : ");
    scanf("%d",&a);
   
   printf("Enter the value of b : ");
    scanf("%d",&b);

    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    mod = a%b;
   

printf("THE ADDITION OF TWO NUMBER IS  = %d\n",add);
printf("THE SUBTRACTION OF TWO NUMBER IS = %d\n",sub);
printf("THE MULTIPLICATION OF TWO NUMBER IS = %d\n",mul);
printf("THE DIVISION OF TWO NUMBER IS = %d\n",div);
printf("THE MODULUS OF TWO NUMBER IS= %d\n",mod);

    
    
    
    return 0 ;


}