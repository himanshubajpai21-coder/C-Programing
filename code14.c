# include<stdio.h>

int main(){


    int age ;

    printf("ENTER THE AGE : ");
    scanf("%d",&age);

    if (age >= 18){
        printf("ADULT\n");
    }

    else if(age >= 13 && age < 18){
        printf("TEENAGER\n");
    }

    else{
        printf("CHILD\n");
    }

    return 0 ;
}