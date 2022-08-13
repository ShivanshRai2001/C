// Recursion
#include<stdio.h>

int factorial(int n);

main()
{
    int x;
    int fact;
    
    printf("Enter the number : ");
    scanf("%d",&x);
    fact=factorial(x);
    printf("%d!=%d",x,fact);
}

int factorial(int n)
{
    if(n==1 || n==0)
    {
        return(1);
    }
    else
    {
        return(n*factorial(n-1));
    }
}
