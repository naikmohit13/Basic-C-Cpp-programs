#include<stdio.h>
main()
{
  int num,i,sum=0;
  printf("\nEnter a number to know whether it is perfect or not\n");
  scanf("%d\n",&num);
  for(i=0;i<num;i++)
  {
    if(num%i==0)
    {
      sum=sum+i;
    }
  }
  if(num==sum)
  {
    printf("\nThe given number %d is perfect number\n",num);
  }
  else
  {
    printf("\nThe given number %d is not perfect number\n",num);
  }
}
