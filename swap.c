// C program to swap numbers without using third variable

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter a number to swap\n");
    scanf("%d %d",&a,&b);
    printf("Numbers Before swap:\n a = %d\n b = %d",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nNumbers After swap:\n a = %d\n b = %d",a,b);
}