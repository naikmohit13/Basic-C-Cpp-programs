#include<stdio.h>
void main()
{
    int arr[100],n,value,pos;
    printf("Enter the length of the array less than 100:\n");
    scanf("%d",&n);

    printf("Enter %d elements to store in the array\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Array before insertion.\n",n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\nEnter the value to insert\n");
    scanf("%d",&value);
    printf("\nEnter the position at which to insert\n");
    scanf("%d",&pos);

    for(int c=n-1;c>=pos-1;c--)
        arr[c+1]=arr[c];
    arr[pos-1]=value;

    printf("\n%d inserted at position %d\n",value,pos);
    printf("Array after insertion.\n");
    for(int j=0;j<n+1;j++)
        printf("%d ",arr[j]);
}
