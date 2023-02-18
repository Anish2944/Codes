// C program for printing Reverse Number 

#include<stdio.h>
int main()
{
    int n,rvrs=0,r;
    printf("Enter a Number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rvrs=rvrs*10 + r;
        n/=10;
    }
    printf("Reversed Number = %d",rvrs);
    return 0;

}