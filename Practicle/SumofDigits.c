// C program to calculate its sum of digits

#include<stdio.h>
void main()
{
    int num,rem,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    while (num!=0)
    {
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    printf("Sum of Digits: %d",sum);
    
}