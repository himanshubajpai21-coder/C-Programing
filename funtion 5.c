#include<stdio.h>
#include<math.h>

int calculatesquare(int a);

int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    int square = calculatesquare(a);
    printf("Square of a number is : %d\n",square);
    
    return 0;
}
int calculatesquare(int a){
    return a*a;
}
