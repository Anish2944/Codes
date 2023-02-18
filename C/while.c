#include <stdio.h>
int main()
{
    int i=1,n=0;
    printf("Sum of first ten natural number\n");
    do
    {
     n=n+i;
     i++;
    } 
     while(i<=10);
     printf("%d",n);
        return 0;
}