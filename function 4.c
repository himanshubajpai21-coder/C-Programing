# include<stdio.h>
 void printTable(int n);

 int main()
 {
    int n;
   printf("ENTER THE NUMBER :");
   scanf("%d",&n);

      printTable(n);  // Argument or actual parameter

   

   return 0;

 } 

void printTable(int n){

    for(int i = 1; i<=10; i++){
        printf("\n%d", i*n);
    }
}