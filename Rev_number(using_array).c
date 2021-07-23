#include<stdio.h>
void main()
{
    int n,arr[100],reverse;
    printf("Enter the no. of digits of the number\n");
    scanf("%d",&n);

    printf("Enter each digit of the number\n");


    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Reversed number is\n");

    for(int i=n-1;i>=0;i--)
        printf("%d",arr[i]);
}
