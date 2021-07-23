#include<stdio.h>
#include<stdlib.h>
void main()
{
    float temp;
    int to,from;

    while(1)
    {
        printf("Enter the number from which you want to convert\n");
        printf("1.Kelvin\n");
        printf("2.Celcius\n");
        printf("3.Faranheit\n");
        printf("4.Exit\n");
        scanf("%d",&from);

        if(from==4)
            exit(0);

        printf("\nEnter the number to which you want to convert\n");
        printf("1.Kelvin\n");
        printf("2.Celcius\n");
        printf("3.Faranheit\n");
        scanf("%d",&to);

        printf("Enter the temperature\n");
        scanf("%f",&temp);

        switch(from)
        {
        case 1:
           {
            switch(to)
            {
            case 1:
                printf("%.2fK\n",temp);
                break;
            case 2:
                printf("%.2fC\n",temp-273.15);
                break;
            case 3:
                printf("%.2fF\n",(-457.87*temp));
                break;
           }
           break;
            }
        case 2:
            {
            switch(to)
            {
            case 1:
                printf("%.2fK\n",temp-273.15);
                break;
            case 2:
                printf("%.2fC\n",temp);
                break;
            case 3:
                printf("%.2fF\n",temp*(33.8));
                break;
           }
            break;
            }
        case 3:
            {
            switch(to)
            {
            case 1:
                printf("%.2fK\n",temp*255.92);
                break;
            case 2:
                printf("%.2fC\n",temp*(-17.222));
                break;
            case 3:
                printf("%.2fF\n",temp);
                break;
           }
           break;
            }
        default:
            printf("Invalid Choice\n Try again!\n");

        }

    }

}

