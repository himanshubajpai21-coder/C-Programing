# include<stdio.h>

int main(){

    int a,b,c;

    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d",&a);

    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d",&b);

    printf("ENTER THE THIRD NUMBER : ");
    scanf("%d",&c);


  int largest  = (a>b) ? ((a>c)? a:c) : ((b>c)? b:c);

   printf("THE LARGEST NUMBER IS : %d",largest);
   




    return 0;
}