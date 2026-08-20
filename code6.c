#include<stdio.h>

int main(){
    int x,num=1;
     while(num<=10){
         x =1;
         printf("\nTable of %d :",num);
     
    
    while(x<=10)
    {
        printf("%d ",num*x);
        x=x+1;
        
    }
    num= num+1;
     }
    return 0;
}