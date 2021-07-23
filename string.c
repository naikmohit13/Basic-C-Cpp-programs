#include<stdio.h>
 void main()
{
char roomies[50][50];
int i;
printf("Name your roomies\n");
    for(i=0;i<6;i++)
{
    scanf("%s\n",roomies[i]);

    printf("%s ",roomies[i]);

}
}
