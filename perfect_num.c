#include<stdio.h>
void main()
{
  int sum=0,n,temp;
  printf("Enter a number\n");
  scanf("%d",&n);
  temp=n;
  for (int i = 1; i<n; i++)
  {
    if (n%i==0)
    {
        sum=sum+i;
    }
  }
  if (temp==sum)
  {
    printf("Perfect Number");
  }
  else
  {
    printf("Not a Perfect number");
  }
  
  
  
}