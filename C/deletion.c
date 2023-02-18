#include<stdio.h>
void main()
{
    int i,j,arr[5],n=5,pos;
   printf("Enter all element\n");
   for (i = 0; i <n; i++)
   {
    printf("Enter a Number %d: ",i+1);
    scanf("%d",&arr[i]);
   }
   printf("Enter a position to remove an element\n");
   scanf("%d",&pos);  
   if(pos>=n+1)
   {
    printf("cannot be delete\n");
   }
   else
   {
    for ( i = pos-1; i < n-1; i++)
    {
    arr[i]=arr[i+1];
    }
   for ( i = 0; i < n-1; i++)
   {
    printf("%d ",arr[i]);
   } 
   }  
}
   
    

