//Creating fibonacci sereis using loop
#include<stdio.h>
void main()
{
    int first=0,second=1,n;
    long term;
    printf("Enter the number of terms in fibonacci series\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        if(i<=1)
            term=i;
        else
        {
            term=first+second;
            first=second;
            second=term;
        }
        printf("%d\t",term);
    }
}
