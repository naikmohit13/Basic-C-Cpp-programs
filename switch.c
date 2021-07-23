#include<stdio.h>
int main()
{int number;
 printf("Enter a number between 1 and 3:");
 scanf("%d",&number);
 switch(number)
 {
  case 1: puts("you entered 1\n");
          break;
  case 2: puts("you entered 2\n");
          break;
  case 3: puts("you entered 3\n");
          break;
  default : puts("Out of range\n");
 }
}
