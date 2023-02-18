#include<stdio.h>
#define n 5
int main()
{
    int a[n],i,*ptr; 
    printf("Enter 5 integer number\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    ptr = &a[n-1];
    printf("Elements in reverse order:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",*ptr--);
    }
    return 0;
    
    
}