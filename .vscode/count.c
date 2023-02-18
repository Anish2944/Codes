#include<stdio.h>
int main()
{
    int rem,num,digit,count=0;
    printf("Enter a Number = ");
    scanf("%d",&num);    
    printf("Enter a Digit = ");    
    scanf("%d",&digit);
    while (num!=0)
    {
        rem=num%10;
        if (rem==digit)
        {
            count++;
        }
        num=num/10;
    }
    printf("Number of digit = %d",count);
        
}