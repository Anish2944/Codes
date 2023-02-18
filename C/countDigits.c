#include<stdio.h>
int main()
{
    int count,n;
    printf("Enter a Number\n");
    scanf("%d",&n);
    count=0;
    while (n!=0)
    {
        count++;
        n=n/10;
    }
    printf("count = %d",count);

    return 0;
    
}