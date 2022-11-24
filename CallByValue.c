// C program to show call by value

#include<stdio.h>
void add(int,int);
void main()
{
    int a,b;
    printf("Enter a value of a and b\n");
    scanf("%d %d",&a,&b);
    add(a,b);
}
void add(int p, int q)
{
    int sum;
    sum = p + q;
    printf("Sum = %d",sum);
}