#include<stdio.h>

int main()
{
  int marks,average;
  average=0;
  for(int i=1;i<=5;i++)
  {


    printf("ENTER THE MARKS OF %d SUBJECT:",i);
    scanf("%d",&marks);
    average += marks;
  }

  average/=5;
  printf("the average marks is %d\n",average);
      if(average>=75)

          printf("grade A");

      else if(average>=50)

          printf("grade B");

        else if (average>=30)

          printf("grade c");

        else

          printf("FAIL");

       return 0;

}
