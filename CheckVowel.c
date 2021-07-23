#include<stdio.h>
void linearsearch(char*,char);
void main()
{
    char arr[]={'a','e','i','o','u','A','E','I','O','U'};
    char c;

    printf("Enter the character\n");
    scanf("%c",&c);
    linearsearch(arr,c);
}
void linearsearch(char arr[],char c)
{
    int flag=1;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==c)
        {
            printf("Character entered is a vowel\n");
            flag=0;
        }
    }
        if(flag==1)
            printf("Not a vowel\n");

}
