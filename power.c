#include<stdio.h>
int main()
{
    int pow=1,x,n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Power = ");
    scanf("%d",&x);
    while (x!=0)
    {
        pow = pow * n;
        --x;
    }
    printf("Answer = %d",pow);
    return 0;
     
}