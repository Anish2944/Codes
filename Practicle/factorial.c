// C program to find the Factorial of given number

#include<stdio.h>

int main()
{
    int i,n,fact=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        fact *=i;
    }
    printf("%d",fact);

    return 0;
}