#include<stdio.h>
void main()
{
    int n,octal=0,remainder,base=1;
    printf("Enter an integer in decimal number system\n");
    scanf("%d",&n);

    printf("%d in octal is:\n\n",n);
    while(n>0)
    {
        remainder=n%8;
        octal=octal+remainder*base;
        n=n/8;
        base=base*10;
    }
    printf("%d\n",octal);
}

