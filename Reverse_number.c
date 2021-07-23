#include<stdio.h>
void main()
{
    int n,temp,reverse=0;
    printf("Enter the number\n");
    scanf("%d",&n);

    temp=n;
    while(temp!=0)
    {
        reverse*=10;
        reverse+=temp%10;
        temp=temp/10;
    }
    printf("Reverse of %d is %d\n",n,reverse);
}
