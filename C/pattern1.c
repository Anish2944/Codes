#include<stdio.h>
void main()
{
    int a=0;
    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            a=i+j;
        printf("%d",a);
        }
    }
    
}