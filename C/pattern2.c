#include<stdio.h>
void main()
{
    
    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            if(j%2!=0)
        printf("1");
        else
        printf("0");
        }
    }
    
}