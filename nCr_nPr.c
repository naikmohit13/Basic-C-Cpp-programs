//nCr nPr program
#include<stdio.h>
int Combination(int,int);
int Permutation(int,int);
int factorial(int);
void main()
{
    int n,r;
    int nCr,nPr;
    printf("Enter values of n and r\n");
    scanf("%d %d",&n,&r);
    nCr=Combination(n,r);
    nPr=Permutation(n,r);
    printf("nCr is %d and nPr is %d",nCr,nPr);
}
int Combination(int n,int r)
{
    int C;
    C=factorial(n)/(factorial(n-r)*factorial(r));
    return C;
}
int Permutation(int n,int r)
{
    int P;
    P=factorial(n)/factorial(n-r);
    return P;
}
int factorial(int f)
{
   int fact=1;

    if(f==0)
        return 1;
    else
    {
       fact=f*factorial(f-1);
        return fact;
    }
}
