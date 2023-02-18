#include<stdio.h>
void main()
{
    int i,n,a[100],sum=0,product=1;
    printf("Enter a number of total elements\n");
    scanf("%d",&n);
    printf("Enter all numbers\n");
    for (i = 0; i < n; i++)
    {
    scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    {
      if (a[i]%2==0)
      {
        sum = sum + (i+1);
      }
      else
      {
        product = product*(i+1);
      }
    }
    printf("Sum:%d\nProduct:%d",sum,product);
}