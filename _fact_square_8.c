		/* C Program to Calculate factorial using while loop */

#include<stdio.h>
int main()
{
    int a,f,i,square=1,m=2;
    printf("Enter a number: ");
    scanf("%d",&a);
    f=1;
    i=1;
    while(i<=a)
    {
        f = f * i;
        i++;
    }
    printf("\nFactorial: %d",f);
    square = a*a

	   	 printf("\n\nsquare = %d", square);

    return 0;
}

