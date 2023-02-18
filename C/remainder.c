//Accept any five digit number and print the value of remainder after dividing by 3
#include<stdio.h>
int main()
{
    int num,num2;
    printf("Enter any Five Digit number\n");
    scanf("%d",&num);
    num2 = num % 3;
    printf("Remainder =%d",num2);
}