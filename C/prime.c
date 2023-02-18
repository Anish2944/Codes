#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter a Number\n");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        if (n%2==0)
        c++;    
    }
    if (c==1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }   
}
