// C program to check if it is armstrong number or not

#include<stdio.h>
void main()
{
    int n,temp,rem,sum=0,st=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        st=rem*rem*rem;
        sum=sum+st;
        n=n/10;
    }
    if (temp==sum)
    {
        printf("Number is armstrong");
    }
    else
    {
        printf("Number is not armstrong");
    }   
}