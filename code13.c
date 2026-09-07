// write a program to print the smallest number among three numbers ;

# include<stdio.h>

int main() {

    int a , b, c;

    printf("ENTER THE FIRST NUMBER :");
    scanf("%d", &a);

    printf("ENTER THE SECOND NUMBER :");
    scanf("%d", &b);

    printf("ENTER THE THIRD NUMBER :");
    scanf("%d", &c);

    if (a < b && a < c){

        printf("THE SMALLEST NUMBER IS : %d", a);
    
    }

    else if (b < a && b < c){

        printf("THE SMALLEST NUMBER IS : %d" , b);
    }

    else {

        printf("THE SMALLEST NUMBER IS : %d", c);

    }
 return 0;
}
