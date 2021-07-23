#include<stdio.h>
void main()
{
    int n,octal=0,remainder,base=1;
    printf("Enter an integer in binary number system\n");
    scanf("%d",&n);

    printf("%d in Octal is:\n\n",n);
    while(n>0)
    {
        remainder=n%10;
        octal=octal+remainder*base;
        n=n/10;
        base=base*2;
    }
    printf("%o",octal);
}

