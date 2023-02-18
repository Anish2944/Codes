//Program for generating Fibonacci series

#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Enter a range\n");
    scanf("%d",&n);
    printf("%d\t%d",a,b);
    printf("\t");
    for(int i=0;i<=n;i++)
    {
        c = a + b;
        printf("%d\t",c);
        a=b;
        b=c;

    }
return 0;
}