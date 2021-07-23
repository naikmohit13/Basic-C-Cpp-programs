#include <stdio.h>    //Swapping of two numbers
int main()
{
int a,b,c;

printf("\n\nEnter the two numbers a and b\n\n");
scanf("%d %d",&a,&b);

printf("\n\nBefore swapping a=%d and b=%d\n\n",a,b);

c=a;
a=b;
b=c;

printf("\n\nAfter swapping a=%d and b=%d\n\n",a,b);

return 0;
}




