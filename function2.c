# include<stdio.h>

void namaste();
void bonjour();

int main()
{
    printf("Enter f for french & i for indian\n:");
    char ch;
    scanf("%c",&ch);
    if (ch=='f')
    {
        bonjour();
    }
    else if (ch=='i')
    {
        namaste();
    }

    else
    {
        printf("\nInvalid input\n");
    }
    return 0;
}

void namaste(){
    printf("\nnamaste\n");
}

void bonjour(){
    printf("\nbonjour\n");
}