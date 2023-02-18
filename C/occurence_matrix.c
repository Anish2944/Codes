#include<stdio.h>
void main()
{
    int a[3][3],i,j,item,count=0;
    printf("Enter a matrix\n");
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter a number to know occurence\n");
    scanf("%d",&item);
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j <3; j++)
        {
          if (a[i][j]==item)
          {
            count++;
          }
        }
    }
    printf("%d occured %d Times",item,count);
}