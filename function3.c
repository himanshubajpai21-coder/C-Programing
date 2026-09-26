# include<stdio.h>
void namaste();
void bonjour();

int main()
{
    printf("Enter f for french & i for indian\n:");
    char ch;
    scanf("%c",&ch);
     namaste();
    return 0;
}

void namaste(){
    printf("namaste\n");
     bonjour();
}

void bonjour(){
    printf("bonjour\n");
}