//Enter the number in decimal and print output in octal in hexadecimal
#include<stdio.h>
int main()
{
    int d;
    printf("Enter a Decimal Number\n");
    scanf("%d",&d);
    printf("octal=%o\n  Hexadecimal=%x",d,d);
}