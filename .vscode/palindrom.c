// Program to check if it is Palindrom or not
 
#include<stdio.h>
void main()
{
    int temp,n,rvrs=0,r;
    printf("Enter a Number to check if its palindrom or Not\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        rvrs=rvrs*10 + r;
        n/=10;
    }
    if(temp==rvrs)
        printf("Palindrom number");
    else
        printf("Not a Palindrom Number");
    
}