#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter Four Number\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("%d is Greatest number",a);
    }
    if(b>a && b>c && b>d)
    {
        printf("%d is Greatest number",b);
    }
    if(c>b && c>a && c>d)
    {
        printf("%d is Greatest number",c);
    }
    if(d>b && d>c && d>a)
    {
        printf("%d is Greatest number",d);
    }
    return 0;
}