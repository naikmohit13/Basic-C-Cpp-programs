#include<stdio.h>
int main()
{
    int n,line_number,number;
    printf("how many lines: ");
    scanf("%d",&n);

    line_number=1;

    while(line_number<=n)
    {
        number=1;
    while(number<=line_number)
     {
         printf("%d\t",number);
        number++;
     }
    print("\n");
    line_number++;
 }
}
