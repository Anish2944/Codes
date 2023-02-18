// Checking Prime number
#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter a Number\n");
    scanf("%d",&n);
        for (int i = 2; i <= n; i++)
        {
            if (n%i == 0) 
            count++;
        }
        if (count == 1)
        {
            printf("\nEntered number is prime");
            }
        else
            {
            printf("\nEntered number is not prime");
            }
        
    }
