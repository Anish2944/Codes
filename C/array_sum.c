#include<stdio.h>
void main()
{
    int n,arr[100],sum=0;
   printf("Enter a number to sum\n");
   scanf("%d",&n);
   for (int i = 0; i <n; i++)
   {
    printf("Enter a Number %d: ",i+1);
    scanf("%d",&arr[i]);
   }  
   for (int j = 0; j <=n; j++)
   {
    sum = sum +arr[j];
   }
   printf("Total Sum is %d ",sum);
}
   
    

