# include<stdio.h>
int sum(int a, int b);
int main()
{
    int a,b;
    printf("Enter the first numbers\n : ");
    scanf("%d",&a);

    printf("Enter the second number\n :");
    scanf("%d",&b);

   int sum = a +b;
    printf("Sum is %d",sum);
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}