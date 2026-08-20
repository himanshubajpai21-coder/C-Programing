#include<stdio.h>

int main(){
    int x= 1,a;
    
    printf("enter a number: ");
    scanf("%d",&a);
    
    while(x<=10){
        printf("%d X %d = %d\n",a,x,a*x);
        x++;
    }
    return 0;
}