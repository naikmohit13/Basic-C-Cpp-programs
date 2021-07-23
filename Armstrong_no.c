#include<stdio.h>
#include<math.h>
void main()
{
    int n,digit,temp,arm=0;
    printf("ENter the number\n");
    scanf("%d",&n);

    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        arm+=(digit*digit*digit);
        temp=temp/10;
    }
    if(arm==n)
        printf("Entered number is a armstrong number\n");
    else
        printf("Entered number is not a armstrong number\n");
}
